/*
 * XREFs of UsbhSetPortData @ 0x14001BE40
 * Callers:
 *     UsbhCreatePdo @ 0x14001A420 (UsbhCreatePdo.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhGetPortData @ 0x14000AE30 (UsbhGetPortData.c)
 *     UsbhRefPdo @ 0x14001D7D0 (UsbhRefPdo.c)
 */

__int64 __fastcall UsbhSetPortData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  _DWORD *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 result; // rax
  __int64 v14; // rdi
  struct _KEVENT *v15; // rax
  __int64 v16; // rcx

  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v5 = *(_QWORD *)(a1 + 64);
      if ( v5 )
      {
        v6 = *(_QWORD *)(v5 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v5 + 880)) & *(_DWORD *)(v5 + 884));
        *(_DWORD *)v6 = 1952739443;
        *(_QWORD *)(v6 + 8) = 0LL;
        *(_QWORD *)(v6 + 16) = a2;
        *(_QWORD *)(v6 + 24) = a3;
      }
    }
  }
  v7 = *((unsigned __int16 *)PdoExt(a2) + 714);
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = 1348759667;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = a2;
        *(_QWORD *)(v9 + 24) = v7;
      }
    }
  }
  v10 = PdoExt(a2);
  result = UsbhGetPortData(a1, *((unsigned __int16 *)v10 + 714), v11, v12);
  v14 = result;
  if ( result )
  {
    v15 = (struct _KEVENT *)PdoExt(a2);
    KeResetEvent(v15 + 54);
    result = UsbhRefPdo(v16, a2, 0LL, 1279349827LL);
    *(_QWORD *)(v14 + 392) = result;
    if ( result )
    {
      _InterlockedExchange((volatile __int32 *)(v14 + 428), 1);
      result = (__int64)PdoExt(result);
      *(_DWORD *)(result + 1424) |= 8u;
    }
    else
    {
      _InterlockedExchange((volatile __int32 *)(v14 + 428), 0);
    }
  }
  return result;
}
