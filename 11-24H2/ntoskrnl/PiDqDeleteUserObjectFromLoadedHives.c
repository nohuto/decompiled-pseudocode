/*
 * XREFs of PiDqDeleteUserObjectFromLoadedHives @ 0x140A9D60C
 * Callers:
 *     PiDqObjectManagerHandleObjectEvent @ 0x140A28F80 (PiDqObjectManagerHandleObjectEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _RegRtlOpenKeyTransacted @ 0x1408C5590 (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlEnumKey @ 0x14097D9B4 (_RegRtlEnumKey.c)
 *     PiDqDeleteUserObject @ 0x140A7EF78 (PiDqDeleteUserObject.c)
 */

NTSTATUS __fastcall PiDqDeleteUserObjectFromLoadedHives(unsigned __int16 *a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  NTSTATUS result; // eax
  ULONG v7; // ebx
  ULONG i; // edx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-C0h] BYREF
  WCHAR v14[256]; // [rsp+58h] [rbp-B0h] BYREF

  KeyHandle = 0LL;
  Handle = 0LL;
  if ( *(_QWORD *)&PiPnpRtlCtx && (v4 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
    v5 = *(_QWORD *)(v4 + 8);
  else
    v5 = 0LL;
  result = RegRtlOpenKeyTransacted(0LL, L"\\REGISTRY\\USER", 0, 8u, &KeyHandle, v5);
  if ( result >= 0 )
  {
    v7 = 0;
    for ( i = 0; ; i = v7 )
    {
      LODWORD(v11) = 256;
      result = RegRtlEnumKey(KeyHandle, i, (char *)v14, (unsigned int *)&v11);
      if ( result < 0 )
        break;
      if ( *(_QWORD *)&PiPnpRtlCtx && (v9 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
        v10 = *(_QWORD *)(v9 + 8);
      else
        v10 = 0LL;
      if ( (int)RegRtlOpenKeyTransacted((__int64)KeyHandle, v14, 0, 1u, &Handle, v10) >= 0 )
      {
        PiDqDeleteUserObject((__int64)Handle, a1, a2);
        ZwClose(Handle);
      }
      ++v7;
    }
  }
  if ( KeyHandle )
    return ZwClose(KeyHandle);
  return result;
}
