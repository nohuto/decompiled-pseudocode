/*
 * XREFs of ?ConvertStringsToOneMultiString@@YAJPEAU_UNICODE_STRING@@IPEAPEAGPEAI@Z @ 0x140238184
 * Callers:
 *     ?CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x140237DCC (-CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     ?CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x140237FD0 (-CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140036AC4 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 */

__int64 __fastcall ConvertStringsToOneMultiString(
        struct _UNICODE_STRING *a1,
        unsigned int a2,
        unsigned __int16 **a3,
        unsigned int *a4)
{
  unsigned __int16 **v4; // r15
  __int64 v5; // rbx
  struct _UNICODE_STRING *v6; // rdi
  int v7; // r13d
  __int64 v8; // rbp
  unsigned int *v9; // r12
  __int64 v10; // r15
  unsigned __int64 Length; // r12
  unsigned int v12; // r14d
  unsigned __int64 v13; // rax
  wchar_t *v14; // rsi
  __int64 v15; // rdx
  char v16; // al
  unsigned int v17; // ebx
  char **v18; // r11
  char *v19; // rcx
  int v20; // r8d
  int v21; // r10d
  unsigned int v22; // ebx
  __int64 result; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rdi
  unsigned int v26; // r11d
  _DWORD *v27; // rsi
  char **v28; // r14
  int v29; // r11d
  struct _UNICODE_STRING *v30; // [rsp+20h] [rbp-1E8h]
  __int64 v31; // [rsp+28h] [rbp-1E0h]
  wchar_t *Buffer; // [rsp+30h] [rbp-1D8h]
  _DWORD v35[32]; // [rsp+50h] [rbp-1B8h] BYREF
  _QWORD v36[30]; // [rsp+D0h] [rbp-138h] BYREF

  v4 = a3;
  v5 = a2;
  v6 = a1;
  v30 = a1;
  v7 = 0;
  v8 = 0LL;
  v9 = a4;
  memset(v36, 0, sizeof(v36));
  if ( (_DWORD)v5 )
  {
    v10 = (unsigned int)v5;
    v31 = v5;
    do
    {
      Length = v6->Length;
      v12 = 0;
      Buffer = v6->Buffer;
      if ( v6->Length )
      {
        v13 = 0LL;
        do
        {
          v14 = &Buffer[v13 / 2];
          v15 = -1LL;
          do
            ++v15;
          while ( v14[v15] );
          if ( !(_DWORD)v15 )
            break;
          v16 = 0;
          v17 = 0;
          if ( (_DWORD)v8 )
          {
            v18 = (char **)v36;
            while ( !v16 )
            {
              v19 = *v18;
              do
              {
                v20 = *(unsigned __int16 *)&v19[(char *)v14 - *v18];
                v21 = *(unsigned __int16 *)v19 - v20;
                if ( v21 )
                  break;
                v19 += 2;
              }
              while ( v20 );
              if ( !v21 )
                v16 = 1;
              ++v17;
              ++v18;
              if ( v17 >= (unsigned int)v8 )
              {
                if ( v16 )
                  break;
                goto LABEL_18;
              }
            }
          }
          else
          {
LABEL_18:
            if ( (unsigned int)v8 < 0x1E )
            {
              v36[v8] = v14;
              v35[v8] = v15 + 1;
              v8 = (unsigned int)(v8 + 1);
              v7 += v15 + 1;
            }
          }
          v12 += v15 + 1;
          v13 = 2LL * v12;
        }
        while ( v13 < Length );
        v6 = v30;
        v10 = v31;
      }
      ++v6;
      --v10;
      v30 = v6;
      v31 = v10;
    }
    while ( v10 );
    v4 = a3;
    v9 = a4;
  }
  v22 = v7 + 1;
  if ( (unsigned int)(v7 + 1) >= 0xFA00 )
    return 3221225659LL;
  v24 = 2LL * v22;
  if ( !is_mul_ok(v22, 2uLL) )
    v24 = -1LL;
  v25 = operator new[](v24, 0x4B677844u, 256LL);
  if ( !v25 )
    return 3221225495LL;
  v26 = 0;
  if ( (_DWORD)v8 )
  {
    v27 = v35;
    v28 = (char **)v36;
    do
    {
      if ( v22 != v26 )
      {
        RtlStringCchCopyW((char *)(v25 + 2LL * v26), v22 - v26, *v28);
        v26 = *v27 + v29;
      }
      ++v28;
      ++v27;
      --v8;
    }
    while ( v8 );
  }
  *(_WORD *)(v25 + 2LL * v26) = 0;
  result = 0LL;
  *v4 = (unsigned __int16 *)v25;
  *v9 = v22;
  return result;
}
