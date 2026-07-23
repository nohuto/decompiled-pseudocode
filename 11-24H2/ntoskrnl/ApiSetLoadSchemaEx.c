/*
 * XREFs of ApiSetLoadSchemaEx @ 0x1407C9BF4
 * Callers:
 *     ApiSetLoadSchemaWithExtensions @ 0x1407C9D10 (ApiSetLoadSchemaWithExtensions.c)
 *     ApiSetpLoadSchemaExtension @ 0x1407C9EBC (ApiSetpLoadSchemaExtension.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140432E80 (RtlImageNtHeader.c)
 *     ZwUnmapViewOfSection @ 0x1406A78F0 (ZwUnmapViewOfSection.c)
 *     strncmp @ 0x1406C0A20 (strncmp.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ApiSetpLoadSchemaImage @ 0x1407CA104 (ApiSetpLoadSchemaImage.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall ApiSetLoadSchemaEx(__int64 a1, _QWORD *a2, size_t *a3)
{
  int v5; // edi
  PIMAGE_NT_HEADERS v6; // rax
  PIMAGE_NT_HEADERS v7; // rsi
  const char *v8; // rbx
  unsigned __int64 i; // r14
  __int64 v10; // r14
  size_t v11; // rbx
  char *v12; // r14
  void *Pool2; // rax
  void *v14; // rsi
  __int64 v16[5]; // [rsp+20h] [rbp-28h] BYREF
  PVOID BaseOfImage; // [rsp+68h] [rbp+20h] BYREF

  v16[0] = 0LL;
  BaseOfImage = 0LL;
  v5 = ((__int64 (__fastcall *)(__int64, __int64, PVOID *, __int64 *))ApiSetpLoadSchemaImage)(a1, a1, &BaseOfImage, v16);
  if ( v5 >= 0 )
  {
    v6 = RtlImageNtHeader(BaseOfImage);
    v7 = v6;
    if ( v6 )
    {
      v8 = (char *)&v6->OptionalHeader + v6->FileHeader.SizeOfOptionalHeader;
      for ( i = 0LL; i < v7->FileHeader.NumberOfSections; ++i )
      {
        if ( !strncmp(v8, ".apiset", 8uLL) )
        {
          if ( !v8 )
            break;
          v10 = *((unsigned int *)v8 + 5);
          v11 = *((unsigned int *)v8 + 4);
          v12 = (char *)BaseOfImage + v10;
          Pool2 = (void *)ExAllocatePool2(0x100uLL, (unsigned int)v11, 0x68635341u);
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
        v8 += 40;
      }
    }
    v5 = -1073741701;
  }
LABEL_12:
  if ( BaseOfImage )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseOfImage);
  return (unsigned int)v5;
}
