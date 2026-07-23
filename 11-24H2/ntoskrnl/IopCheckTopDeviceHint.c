/*
 * XREFs of IopCheckTopDeviceHint @ 0x1409DE490
 * Callers:
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     RtlCopyUnicodeString @ 0x1403FA370 (RtlCopyUnicodeString.c)
 *     IopVerifyDeviceObjectOnStack @ 0x14040A8E0 (IopVerifyDeviceObjectOnStack.c)
 */

__int64 __fastcall IopCheckTopDeviceHint(__int64 *a1, __int64 a2, char a3, const UNICODE_STRING *a4)
{
  unsigned int *v4; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // r8
  __int64 v11; // rax
  __int64 *v12; // rbx
  __int64 *v13; // rcx
  int v14; // eax
  __int64 v15; // rax

  v4 = (unsigned int *)*a1;
  if ( a3 )
    return 3221225485LL;
  v8 = v4[18];
  if ( (unsigned int)v8 > 0x35 )
    return 3221225485LL;
  v9 = 0x20000100121108LL;
  if ( !_bittest64(&v9, v8) )
    return 3221225485LL;
  if ( IopVerifyDeviceObjectOnStack(*a1, *(_QWORD *)(a2 + 176), 1) )
  {
    *a1 = *(_QWORD *)(a2 + 176);
    return 0LL;
  }
  else
  {
    v11 = *(_QWORD *)(a2 + 168);
    if ( v11 )
    {
      v12 = *(__int64 **)(v11 + 8);
      v13 = (__int64 *)(v11 + 8);
      while ( v12 != v13 )
      {
        v15 = v12[2] - *(_QWORD *)&GUID_ECP_IO_DEVICE_HINT.Data1;
        if ( !v15 )
          v15 = v12[3] - *(_QWORD *)GUID_ECP_IO_DEVICE_HINT.Data4;
        if ( !v15 )
        {
          *((_DWORD *)v12 + 10) |= 4u;
          if ( *((_WORD *)v12 + 37) >= a4->Length )
          {
            PsReferenceSiloContext(v4);
            v12[8] = (__int64)v4;
            RtlCopyUnicodeString((PUNICODE_STRING)(v12 + 9), a4);
            *((_DWORD *)v12 + 10) |= 8u;
            break;
          }
          *((_WORD *)v12 + 36) = a4->Length;
          return 3221226646LL;
        }
        v12 = (__int64 *)*v12;
      }
    }
    v14 = *(_DWORD *)(a2 + 152);
    if ( (v14 & 0x10) != 0 )
    {
      *(_DWORD *)(a2 + 152) = v14 & 0xFFFFFFEF;
      return 3221226344LL;
    }
    else
    {
      return 3221226345LL;
    }
  }
}
