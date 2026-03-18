/*
 * XREFs of Isoch_TransferData_Initialize @ 0x140022F40
 * Callers:
 *     Isoch_RetrieveNextStage @ 0x14000E290 (Isoch_RetrieveNextStage.c)
 * Callees:
 *     McTemplateK0uqqq_EtwWriteTransfer @ 0x14000C7C0 (McTemplateK0uqqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_DDi @ 0x1400355FC (WPP_RECORDER_SF_DDi.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 *     memset @ 0x140058EC0 (memset.c)
 */

__int64 __fastcall Isoch_TransferData_Initialize(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // ebp
  __int16 v7; // ax
  __int64 v8; // rdi
  ULONG v9; // r15d
  __int64 v10; // rbx
  __int64 v11; // rax
  struct _MDL *Mdl; // rax
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rdx
  PIRP Irp; // [rsp+20h] [rbp-88h]
  __int64 v19; // [rsp+28h] [rbp-80h]
  __int64 v20; // [rsp+30h] [rbp-78h]
  _OWORD v21[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v22; // [rsp+60h] [rbp-48h]

  v3 = 0;
  v22 = 0LL;
  memset(v21, 0, sizeof(v21));
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount > 0x33 )
    {
      LOWORD(v21[0]) = *(_WORD *)(WdfStructures + 408);
      goto LABEL_7;
    }
    v7 = -1;
  }
  else
  {
    v7 = 40;
  }
  LOWORD(v21[0]) = v7;
LABEL_7:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    a2,
    v21);
  v8 = *((_QWORD *)&v21[0] + 1);
  switch ( *(_WORD *)(*((_QWORD *)&v21[0] + 1) + 2LL) )
  {
    case '9':
    case ':':
      v9 = *(_DWORD *)(*((_QWORD *)&v21[0] + 1) + 52LL);
      break;
    default:
      v9 = *(_DWORD *)(*((_QWORD *)&v21[0] + 1) + 36LL);
      break;
  }
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
          WdfDriverGlobals,
          a2,
          off_14006AE88);
  *(_DWORD *)(v10 + 17) = 0;
  *(_WORD *)(v10 + 21) = 0;
  *(_BYTE *)(v10 + 23) = 0;
  *(_OWORD *)(v10 + 32) = 0LL;
  memset((void *)(v10 + 96), 0, 0x2A0uLL);
  *(_QWORD *)(v10 + 8) = v10;
  *(_QWORD *)v10 = v10;
  *(_QWORD *)(v10 + 72) = 0LL;
  *(_DWORD *)(v10 + 80) = v9;
  *(_BYTE *)(v10 + 16) = 1;
  *(_QWORD *)(v10 + 24) = a2;
  *(_QWORD *)(v10 + 48) = v8;
  *(_QWORD *)(v10 + 56) = a1;
  *(_DWORD *)(v10 + 68) = 259;
  *(_DWORD *)(v10 + 64) = 0;
  *(_QWORD *)(v10 + 84) = 0LL;
  *(_DWORD *)(v10 + 92) = 0;
  *(_DWORD *)(v10 + 96) = *(_DWORD *)(v8 + 132);
  *(_QWORD *)(v10 + 100) = 0LL;
  *(_QWORD *)(v10 + 108) = 0LL;
  *(_DWORD *)(v10 + 116) = 0;
  *(_DWORD *)(v10 + 128) = 976;
  *(_WORD *)(v10 + 132) = 0;
  *(_BYTE *)(v10 + 134) = 0;
  switch ( *(_WORD *)(v8 + 2) )
  {
    case '9':
    case ':':
      goto LABEL_17;
    default:
      v11 = *(_QWORD *)(v8 + 48);
      if ( v11 )
      {
        *(_QWORD *)(v10 + 72) = v11;
        goto LABEL_17;
      }
      Mdl = IoAllocateMdl(*(PVOID *)(v8 + 40), v9, 0, 0, 0LL);
      *(_QWORD *)(v10 + 72) = Mdl;
      if ( Mdl )
      {
        MmBuildMdlForNonPagedPool(Mdl);
LABEL_17:
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
        {
          v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 2280))(
                  WdfDriverGlobals,
                  a2);
          if ( (int)IoGetActivityIdIrp(v15, v10 + 32) < 0 )
            EtwActivityIdControl(3u, (LPGUID)(v10 + 32));
          if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
          {
            v16 = *(_QWORD *)(a1 + 56);
            LODWORD(v20) = *(_DWORD *)(v10 + 80);
            LODWORD(v19) = *(_DWORD *)(a1 + 64);
            LODWORD(Irp) = *(_DWORD *)(v16 + 152);
            McTemplateK0uqqq_EtwWriteTransfer(
              (unsigned int)Irp,
              v16,
              v10 + 32,
              *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
              (__int64)Irp,
              v19,
              v20);
          }
        }
        goto LABEL_22;
      }
      v3 = -1073741670;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = *(_QWORD *)(a1 + 56);
        v14 = *(_DWORD *)(v13 + 152);
        LOBYTE(v13) = 2;
        WPP_RECORDER_SF_DDi(
          *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
          v13,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
          15,
          (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
          v14,
          a2);
      }
LABEL_22:
      *a3 = v10;
      return v3;
  }
}
