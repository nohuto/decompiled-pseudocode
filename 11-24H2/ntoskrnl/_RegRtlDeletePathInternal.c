/*
 * XREFs of _RegRtlDeletePathInternal @ 0x140A6AD38
 * Callers:
 *     _PnpCtxRegDeletePath @ 0x140A6ACEC (_PnpCtxRegDeletePath.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x14041DC50 (RtlStringCchCopyExW.c)
 *     wcsrchr @ 0x140500180 (wcsrchr.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     _RegRtlOpenKeyTransacted @ 0x1408C7B60 (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlDeleteTreeInternal @ 0x140991230 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlQueryInfoKey @ 0x140993F98 (_RegRtlQueryInfoKey.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140A6AF3C (_RegRtlDeleteKeyTransacted.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RegRtlDeletePathInternal(__int64 a1, const wchar_t *a2, char a3, __int64 a4, int a5)
{
  const wchar_t *v9; // rax
  __int64 v10; // r10
  unsigned int v11; // ebx
  size_t v12; // rbx
  wchar_t *Pool2; // rax
  WCHAR *v14; // rdi
  unsigned int i; // eax
  wchar_t *v16; // rax
  unsigned int v17; // eax
  HANDLE Handle; // [rsp+30h] [rbp-38h] BYREF
  int v20; // [rsp+78h] [rbp+10h] BYREF

  Handle = 0LL;
  a5 = 0;
  v20 = 0;
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
    if ( v10 )
    {
      v12 = ((0x7FFF - v10) & -(__int64)(v10 != 0)) + 1;
      Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
      v14 = Pool2;
      if ( Pool2 )
      {
        v11 = RtlStringCchCopyExW(Pool2, v12, a2, 0LL, 0LL, 0x100u);
        if ( !v11 )
        {
          if ( !a3 )
            goto LABEL_12;
          for ( i = RegRtlDeleteTreeInternal(a1, v14, a4, 0); ; i = RegRtlDeleteKeyTransacted(a1, v14, 0LL) )
          {
            v11 = i;
            if ( i )
            {
              if ( i != -1073741772 )
                break;
            }
            v16 = wcsrchr(v14, 0x5Cu);
            if ( !v16 )
              break;
            do
            {
              *v16 = 0;
              if ( v16 == v14 )
                break;
              --v16;
            }
            while ( *v16 == 92 );
LABEL_12:
            v17 = RegRtlOpenKeyTransacted(a1, v14, 0, 1u, &Handle, a4);
            v11 = v17;
            if ( v17 )
            {
              if ( v17 != -1073741772 )
              {
                if ( v17 == -1073741444 )
                  v11 = 0;
                break;
              }
            }
            else
            {
              v11 = RegRtlQueryInfoKey(Handle, &a5, 0LL, &v20, 0LL, 0LL);
              ZwClose(Handle);
              if ( v11 != -1073741444 && v11 )
                break;
              if ( v20 || a5 )
              {
                v11 = -1073741535;
                break;
              }
            }
          }
        }
        ExFreePoolWithTag(v14, 0);
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
