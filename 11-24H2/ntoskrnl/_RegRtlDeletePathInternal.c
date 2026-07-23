/*
 * XREFs of _RegRtlDeletePathInternal @ 0x140A64448
 * Callers:
 *     _PnpCtxRegDeletePath @ 0x140A643FC (_PnpCtxRegDeletePath.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x140412020 (RtlStringCchCopyExW.c)
 *     wcsrchr @ 0x1404FDA40 (wcsrchr.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _RegRtlOpenKeyTransacted @ 0x1408C5590 (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlDeleteTreeInternal @ 0x14097C270 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlQueryInfoKey @ 0x14097EFD8 (_RegRtlQueryInfoKey.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140A6464C (_RegRtlDeleteKeyTransacted.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RegRtlDeletePathInternal(__int64 a1, const wchar_t *a2, char a3, __int64 a4, int a5)
{
  const wchar_t *v9; // rax
  __int64 v10; // r10
  unsigned int v11; // ebx
  __int64 v12; // rcx
  size_t v13; // rbx
  wchar_t *Pool2; // rax
  WCHAR *v15; // rdi
  unsigned int i; // eax
  wchar_t *v17; // rax
  unsigned int v18; // eax
  HANDLE Handle; // [rsp+30h] [rbp-38h] BYREF
  int v21; // [rsp+78h] [rbp+10h] BYREF

  Handle = 0LL;
  a5 = 0;
  v21 = 0;
  if ( a2 )
  {
    v9 = a2;
    v10 = 0x7FFFLL;
    do
    {
      if ( !*v9 )
        break;
      ++v9;
      --v10;
    }
    while ( v10 );
    v11 = v10 == 0 ? 0xC000000D : 0;
    v12 = (0x7FFF - v10) & -(__int64)(v10 != 0);
    if ( v10 )
    {
      v13 = v12 + 1;
      Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, 2 * (v12 + 1), 0x4C474552u);
      v15 = Pool2;
      if ( Pool2 )
      {
        v11 = RtlStringCchCopyExW(Pool2, v13, a2, 0LL, 0LL, 0x100u);
        if ( !v11 )
        {
          if ( !a3 )
            goto LABEL_12;
          for ( i = RegRtlDeleteTreeInternal(a1, v15, a4, 0); ; i = RegRtlDeleteKeyTransacted(a1, v15, 0LL) )
          {
            v11 = i;
            if ( i )
            {
              if ( i != -1073741772 )
                break;
            }
            v17 = wcsrchr(v15, 0x5Cu);
            if ( !v17 )
              break;
            do
            {
              *v17 = 0;
              if ( v17 == v15 )
                break;
              --v17;
            }
            while ( *v17 == 92 );
LABEL_12:
            v18 = RegRtlOpenKeyTransacted(a1, v15, 0, 1u, &Handle, a4);
            v11 = v18;
            if ( v18 )
            {
              if ( v18 != -1073741772 )
              {
                if ( v18 == -1073741444 )
                  v11 = 0;
                break;
              }
            }
            else
            {
              v11 = RegRtlQueryInfoKey(Handle, &a5, 0LL, &v21, 0LL, 0LL);
              ZwClose(Handle);
              if ( v11 != -1073741444 && v11 )
                break;
              if ( v21 || a5 )
              {
                v11 = -1073741535;
                break;
              }
            }
          }
        }
        ExFreePoolWithTag(v15, 0);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v11;
}
