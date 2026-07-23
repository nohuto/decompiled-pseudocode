/*
 * XREFs of PiSwPropertySet @ 0x1408B5A60
 * Callers:
 *     PiSwIrpPropertySet @ 0x1408AF734 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfaceRegister @ 0x1408AFE78 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfacePropertySet @ 0x1408B69EC (PiSwIrpInterfacePropertySet.c)
 *     PiSwCompleteCreate @ 0x1409F0EA8 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x1409F13D4 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     PiPnpRtlSetObjectProperty @ 0x1408B5E10 (PiPnpRtlSetObjectProperty.c)
 *     PiPnpRtlBeginOperation @ 0x1408C99A8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408C9B88 (PiPnpRtlEndOperation.c)
 *     _PnpOpenObjectRegKey @ 0x1408CAE28 (_PnpOpenObjectRegKey.c)
 */

__int64 __fastcall PiSwPropertySet(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v7; // r14d
  int v8; // ebx
  unsigned int v9; // esi
  __int64 v10; // rdi
  int v11; // eax
  HANDLE Handle; // [rsp+58h] [rbp-30h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-28h] BYREF

  P[0] = 0LL;
  Handle = 0LL;
  v7 = a2;
  v8 = PiPnpRtlBeginOperation(P, a2, a3);
  if ( v8 >= 0 )
  {
    v8 = PnpOpenObjectRegKey(PiPnpRtlCtx, a1, v7, 7, 0, (__int64)&Handle);
    if ( v8 >= 0 )
    {
      v9 = 0;
      if ( a4 )
      {
        v10 = a3 + 40;
        do
        {
          v11 = PiPnpRtlSetObjectProperty(*(_QWORD *)&PiPnpRtlCtx, a1, v7);
          v8 = v11;
          if ( v11 == -1073741275 )
          {
            if ( *(_DWORD *)(v10 - 8) )
              break;
            v8 = 0;
          }
          else if ( v11 < 0 )
          {
            break;
          }
          ++v9;
          v10 += 48LL;
        }
        while ( v9 < a4 );
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
  if ( P[0] )
    PiPnpRtlEndOperation(P[0]);
  return (unsigned int)v8;
}
