/*
 * XREFs of ApiSetLoadSchemaEx @ 0x1407B9F34
 * Callers:
 *     ApiSetLoadSchemaWithExtensions @ 0x1407BA050 (ApiSetLoadSchemaWithExtensions.c)
 *     ApiSetpLoadSchemaExtension @ 0x1407BA22C (ApiSetpLoadSchemaExtension.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14043DFA0 (RtlImageNtHeader.c)
 *     ZwUnmapViewOfSection @ 0x14069B680 (ZwUnmapViewOfSection.c)
 *     strncmp @ 0x1406B4820 (strncmp.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ApiSetpLoadSchemaImage @ 0x1407BA474 (ApiSetpLoadSchemaImage.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall ApiSetLoadSchemaEx(__int64 a1, _QWORD *a2, size_t *a3)
{
  int v5; // edi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  unsigned __int64 i; // r14
  __int64 v10; // r14
  size_t v11; // rbx
  char *v12; // r14
  void *Pool2; // rax
  void *v14; // rsi
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp+20h] BYREF

  v16[0] = 0LL;
  BaseAddress = 0LL;
  v5 = ((__int64 (__fastcall *)(__int64, __int64, PVOID *, _QWORD *))ApiSetpLoadSchemaImage)(a1, a1, &BaseAddress, v16);
  if ( v5 >= 0 )
  {
    v6 = RtlImageNtHeader((unsigned __int64)BaseAddress);
    v7 = v6;
    if ( v6 )
    {
      v8 = v6 + *(unsigned __int16 *)(v6 + 20) + 24LL;
      for ( i = 0LL; i < *(unsigned __int16 *)(v7 + 6); ++i )
      {
        if ( !strncmp((const char *)v8, ".apiset", 8uLL) )
        {
          if ( !v8 )
            break;
          v10 = *(unsigned int *)(v8 + 20);
          v11 = *(unsigned int *)(v8 + 16);
          v12 = (char *)BaseAddress + v10;
          Pool2 = (void *)ExAllocatePool2(0x100uLL);
          v14 = Pool2;
          if ( Pool2 )
          {
            memmove(Pool2, v12, v11);
            *a2 = v14;
            *a3 = v11;
          }
          else
          {
            v5 = -1073741801;
          }
          goto LABEL_12;
        }
        v8 += 40LL;
      }
    }
    v5 = -1073741701;
  }
LABEL_12:
  if ( BaseAddress )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  return (unsigned int)v5;
}
