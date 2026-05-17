/*
 * XREFs of RtlConvertDeviceFamilyInfoToString @ 0x1800AAE20
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetDeviceFamilyInfoEnum @ 0x1800AAF10 (RtlpGetDeviceFamilyInfoEnum.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlConvertDeviceFamilyInfoToString(unsigned int *a1, unsigned int *a2, void *a3, void *a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  wchar_t *v11; // rdx
  __int64 v12; // rax
  wchar_t *v13; // rbp
  unsigned int v14; // eax
  unsigned int v15; // ebx
  char v16; // cl
  unsigned int v18; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+58h] [rbp+10h] BYREF

  v18 = 0;
  v19 = 0;
  RtlpGetDeviceFamilyInfoEnum(0LL, &v18, &v19);
  v8 = v18;
  v9 = v19;
  if ( v18 > 0x11 )
    v8 = 0LL;
  if ( v19 > 0x2F )
    v9 = 0LL;
  v10 = -1LL;
  v11 = off_180174770[v8];
  v12 = -1LL;
  v13 = off_180174800[v9];
  do
    ++v12;
  while ( v11[v12] );
  v14 = 2 * v12 + 2;
  do
    ++v10;
  while ( v13[v10] );
  v15 = 2 * v10 + 2;
  if ( v14 > *a1 || (v16 = 0, v15 > *a2) )
    v16 = 1;
  *a1 = v14;
  *a2 = v15;
  if ( v16 )
    return 3221225507LL;
  memmove(a3, v11, v14);
  memmove(a4, v13, v15);
  return 0LL;
}
