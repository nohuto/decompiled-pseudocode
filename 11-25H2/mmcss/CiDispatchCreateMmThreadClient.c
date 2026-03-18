/*
 * XREFs of CiDispatchCreateMmThreadClient @ 0x1C000D290
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C0004620 (WPP_SF_.c)
 *     WPP_SF_dd @ 0x1C00049A4 (WPP_SF_dd.c)
 *     CiTaskIndexCreate @ 0x1C000D070 (CiTaskIndexCreate.c)
 *     CiLookupTask @ 0x1C000D460 (CiLookupTask.c)
 *     CiTaskIndexLocate @ 0x1C000D540 (CiTaskIndexLocate.c)
 *     CiThreadCreate @ 0x1C000D720 (CiThreadCreate.c)
 */

__int64 __fastcall CiDispatchCreateMmThreadClient(PIRP Irp, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r15
  ULONG_PTR v4; // rbp
  int v5; // r9d
  __int64 v7; // r14
  NTSTATUS v8; // edi
  struct _IRP *MasterIrp; // rsi
  __int64 v10; // r9
  unsigned int MdlAddress_high; // edi
  unsigned int *v12; // rsi
  __int64 v13; // rax
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  PVOID P; // [rsp+68h] [rbp+10h] BYREF
  __int64 v17; // [rsp+70h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v5 = *(_DWORD *)(a2 + 32);
  v7 = *(_QWORD *)(a2 + 48);
  v8 = -1073741811;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v15 = 0LL;
  P = 0LL;
  v17 = 0LL;
  if ( v5 == 272 )
  {
    if ( *(_DWORD *)&MasterIrp->Type
      || *((_BYTE *)&MasterIrp->Size + 2)
      || *((_BYTE *)&MasterIrp->Size + 3)
      || *(&MasterIrp->Size + 2) != 263
      || LOBYTE(MasterIrp->MdlAddress)
      || BYTE1(MasterIrp->MdlAddress)
      || BYTE2(MasterIrp->MdlAddress)
      || (v10 = BYTE3(MasterIrp->MdlAddress), (unsigned __int8)v10 > 1u) )
    {
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0xDu,
          (__int64)&WPP_c50a18c053cc3d547b2a795787fa6cf4_Traceguids);
    }
    else
    {
      v8 = CiLookupTask(&MasterIrp->Flags, &MasterIrp->Tail.CompletionKey + 3, a3, v10, &v15);
      if ( v8 >= 0 )
      {
        MdlAddress_high = HIDWORD(MasterIrp->MdlAddress);
        KeEnterCriticalRegion();
        if ( MdlAddress_high )
        {
          v8 = CiTaskIndexLocate(MdlAddress_high, v15, &P);
          if ( v8 >= 0 )
            goto LABEL_13;
        }
        else
        {
          v8 = CiTaskIndexCreate(v15, (__int64 *)&P);
          if ( v8 >= 0 )
          {
LABEL_13:
            v12 = (unsigned int *)P;
            v8 = CiThreadCreate(CurrentThread, P);
            if ( v8 >= 0 )
            {
              v13 = v17;
              *(_QWORD *)(v17 + 8) = v7;
              *(_QWORD *)(v7 + 24) = v13;
              v4 = v12[36];
            }
          }
        }
        KeLeaveCriticalRegion();
      }
    }
  }
  else if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_dd((__int64)WPP_GLOBAL_Control->AttachedDevice, 0xCu, a3, v5, 272);
  }
  Irp->IoStatus.Status = v8;
  Irp->IoStatus.Information = v4;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v8;
}
