/*
 * XREFs of PiSwPropertySet @ 0x1409550B8
 * Callers:
 *     PiSwIrpInterfacePropertySet @ 0x140835F5C (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpInterfaceRegister @ 0x14095D5E8 (PiSwIrpInterfaceRegister.c)
 *     PiSwCompleteCreate @ 0x1409A3A80 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x1409A4180 (PiSwIrpStartCreateWorker.c)
 *     PiSwIrpPropertySet @ 0x140A66038 (PiSwIrpPropertySet.c)
 * Callees:
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     _PnpOpenObjectRegKey @ 0x1408CAD38 (_PnpOpenObjectRegKey.c)
 *     PiPnpRtlBeginOperation @ 0x1408D0818 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408D09F8 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlSetObjectProperty @ 0x140955470 (PiPnpRtlSetObjectProperty.c)
 */

__int64 __fastcall PiSwPropertySet(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  int v8; // ebx
  unsigned int v9; // esi
  _QWORD *v10; // rdi
  int v11; // eax
  __int64 v13; // [rsp+40h] [rbp-48h]
  int v14; // [rsp+50h] [rbp-38h]
  HANDLE Handle; // [rsp+58h] [rbp-30h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-28h] BYREF

  P[0] = 0LL;
  Handle = 0LL;
  v8 = PiPnpRtlBeginOperation(P);
  if ( v8 >= 0 )
  {
    v8 = PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, a1, a2, 7, 0, (__int64)&Handle);
    if ( v8 >= 0 )
    {
      v9 = 0;
      if ( a4 )
      {
        v10 = (_QWORD *)(a3 + 40);
        do
        {
          LODWORD(v13) = *((_DWORD *)v10 - 1);
          v11 = PiPnpRtlSetObjectProperty(
                  *(_QWORD *)&PiPnpRtlCtx,
                  a1,
                  a2,
                  Handle,
                  *(v10 - 2),
                  v10 - 5,
                  *((_DWORD *)v10 - 2),
                  *v10,
                  v13,
                  0,
                  v14);
          v8 = v11;
          if ( v11 == -1073741275 )
          {
            if ( *((_DWORD *)v10 - 2) )
              break;
            v8 = 0;
          }
          else if ( v11 < 0 )
          {
            break;
          }
          ++v9;
          v10 += 6;
        }
        while ( v9 < a4 );
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
  if ( P[0] )
    PiPnpRtlEndOperation((PVOID **)P[0]);
  return (unsigned int)v8;
}
