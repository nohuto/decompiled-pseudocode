/*
 * XREFs of BiCreateBootEntry @ 0x140814BFC
 * Callers:
 *     BiCreateEfiEntry @ 0x140814FB0 (BiCreateEfiEntry.c)
 * Callees:
 *     swprintf_s @ 0x140502E50 (swprintf_s.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     BiLogMessage @ 0x1409BE7F8 (BiLogMessage.c)
 *     BiGetKeyName @ 0x1409BEDA8 (BiGetKeyName.c)
 *     BiGetElement @ 0x1409BFBB8 (BiGetElement.c)
 *     BiTranslateFilePath @ 0x1409C0B6C (BiTranslateFilePath.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiCreateBootEntry(__int64 a1, void **a2)
{
  _DWORD *v2; // rdi
  void *v3; // rsi
  unsigned int *v4; // r14
  void *v5; // r12
  _DWORD *Pool2; // r15
  int Element; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  __int64 v12; // r13
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rax
  size_t v16; // rbx
  unsigned int v17; // eax
  int KeyName; // eax
  int v19; // ebx
  int v20; // r8d
  unsigned int v21; // ecx
  _DWORD *v22; // rax
  _DWORD *v23; // rdx
  size_t v24; // r8
  int v25; // eax
  int v26; // ecx
  __int64 v27; // rax
  char *v28; // rbx
  char *v29; // rax
  _DWORD *v31; // [rsp+30h] [rbp-38h] BYREF
  int v32; // [rsp+38h] [rbp-30h] BYREF
  void *v33; // [rsp+40h] [rbp-28h] BYREF
  void *Src; // [rsp+48h] [rbp-20h] BYREF
  void *v35; // [rsp+50h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+58h] [rbp-10h] BYREF
  size_t v39; // [rsp+C0h] [rbp+58h] BYREF
  size_t Size; // [rsp+C8h] [rbp+60h] BYREF

  LODWORD(v39) = 0;
  LODWORD(Size) = 0;
  v32 = 0;
  v2 = 0LL;
  P[0] = 0LL;
  v3 = 0LL;
  v31 = 0LL;
  v4 = 0LL;
  Src = 0LL;
  v5 = 0LL;
  v33 = 0LL;
  Pool2 = 0LL;
  v35 = 0LL;
  Element = BiGetElement(a1, 301989892LL, P, &v39);
  v9 = Element;
  if ( Element < 0 )
  {
    BiLogMessage(
      4LL,
      L"BiCreateBootEntry: Could not retrieve BCD Object application description. Status: %x",
      (unsigned int)Element);
    goto LABEL_25;
  }
  v10 = BiGetElement(a1, 285212673LL, &v31, &Size);
  v9 = v10;
  if ( v10 < 0 )
  {
    BiLogMessage(
      4LL,
      L"BiCreateBootEntry: Could not retrieve BCD Object application device. Status: %x",
      (unsigned int)v10);
    v2 = v31;
    goto LABEL_25;
  }
  v11 = BiGetElement(a1, 301989890LL, &Src, &v32);
  v9 = v11;
  if ( v11 < 0 )
  {
    BiLogMessage(
      4LL,
      L"BiCreateBootEntry: Could not retrieve BCD Object application path. Status: %x",
      (unsigned int)v11);
    v2 = v31;
    v3 = Src;
    goto LABEL_25;
  }
  v2 = v31;
  v3 = Src;
  if ( *v31 != 2 )
  {
    v9 = -1073741637;
    goto LABEL_25;
  }
  v12 = -1LL;
  v13 = -1LL;
  do
    ++v13;
  while ( *((_WORD *)Src + v13) );
  v14 = 2 * v13 + 2;
  v15 = -1LL;
  LODWORD(Size) = v14;
  do
    ++v15;
  while ( *((_WORD *)v31 + v15 + 10) );
  v16 = (unsigned int)(2 * v15 + 2);
  v17 = v14 + v16;
  if ( v14 + (int)v16 < (unsigned int)v16 || v17 + 12 < v17 )
    goto LABEL_24;
  v31 = (_DWORD *)(v17 + 12);
  Pool2 = (_DWORD *)ExAllocatePool2(0x102uLL);
  if ( !Pool2 )
  {
LABEL_16:
    v9 = -1073741670;
    goto LABEL_25;
  }
  Pool2[1] = (_DWORD)v31;
  *Pool2 = 1;
  Pool2[2] = 3;
  memmove(Pool2 + 3, v2 + 5, v16);
  memmove((char *)Pool2 + v16 + 12, v3, (unsigned int)Size);
  v9 = BiTranslateFilePath(Pool2, 4LL, &v33);
  if ( v9 < 0 || (KeyName = BiGetKeyName(a1, &v35), v5 = v35, v9 = KeyName, KeyName < 0) )
  {
    v4 = (unsigned int *)v33;
    goto LABEL_25;
  }
  do
    ++v12;
  while ( *((_WORD *)v35 + v12) );
  v4 = (unsigned int *)v33;
  LODWORD(v31) = (2 * v12 + 45) & 0xFFFFFFFC;
  v19 = (_DWORD)v31 + 16;
  LODWORD(Src) = (_DWORD)v31 + 16;
  v20 = *((_DWORD *)v33 + 1);
  v21 = ((_DWORD)v31 + 47) & 0xFFFFFFFC;
  LODWORD(v35) = v21;
  if ( (unsigned int)v39 + v21 + v20 + 4 < (unsigned int)v39 )
  {
LABEL_24:
    v9 = -1073741675;
  }
  else
  {
    LODWORD(Size) = (v21 + v39 + 3) & 0xFFFFFFFC;
    v32 = v20 + Size;
    v22 = (_DWORD *)ExAllocatePool2(0x102uLL);
    v33 = v22;
    v23 = v22;
    if ( !v22 )
      goto LABEL_16;
    v22[2] = -1;
    v24 = (unsigned int)v39;
    *v22 = 1;
    v25 = v32;
    v23[3] = 1;
    v26 = Size;
    v23[1] = v25;
    v27 = (unsigned int)v35;
    v23[5] = v26;
    v23[4] = v27;
    v23[6] = v19;
    memmove((char *)v23 + v27, P[0], v24);
    v28 = (char *)v33;
    memmove((char *)v33 + (unsigned int)Size, v4, v4[1]);
    v28 += 28;
    *(_QWORD *)v28 = 0x53574F444E4957LL;
    *((_DWORD *)v28 + 3) = (_DWORD)Src;
    *((_DWORD *)v28 + 4) = (_DWORD)v31;
    *((_DWORD *)v28 + 2) = 1;
    swprintf_s((wchar_t *)v28 + 10, (unsigned int)v12 + 11LL, L"%s%s", L"BCDOBJECT=", v5);
    v29 = &v28[*((unsigned int *)v28 + 4)];
    v9 = 0;
    *(_DWORD *)v29 = 1;
    *((_DWORD *)v29 + 1) = 16;
    *((_DWORD *)v29 + 2) = 4;
    *((_DWORD *)v29 + 3) = 327551;
    *a2 = v33;
  }
LABEL_25:
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0x4B444342u);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x4B444342u);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4B444342u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x4B444342u);
  return (unsigned int)v9;
}
