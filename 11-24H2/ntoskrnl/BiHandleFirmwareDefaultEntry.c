/*
 * XREFs of BiHandleFirmwareDefaultEntry @ 0x140815B34
 * Callers:
 *     BiExportEfiBootManager @ 0x140AADFCC (BiExportEfiBootManager.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     BiTranslateObjectIdentifier @ 0x140815E74 (BiTranslateObjectIdentifier.c)
 *     BiDeleteElement @ 0x1409A5F20 (BiDeleteElement.c)
 *     BiGetElement @ 0x1409A6208 (BiGetElement.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiHandleFirmwareDefaultEntry(__int64 a1, void *a2, PVOID *a3, unsigned int *a4)
{
  int Element; // eax
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  __int64 v11; // rdi
  char *v12; // rbp
  int v13; // esi
  _DWORD *v14; // rax
  _DWORD *Pool2; // rax
  _DWORD *v16; // r14
  _DWORD v18[2]; // [rsp+20h] [rbp-28h] BYREF
  PVOID P; // [rsp+28h] [rbp-20h]

  v18[0] = 0;
  v18[1] = 0;
  P = 0LL;
  Element = BiGetElement(a2, 0x23000003u);
  v9 = Element;
  if ( Element == -1073741275 )
    goto LABEL_20;
  if ( Element < 0 )
    goto LABEL_21;
  BiDeleteElement(a2, 587202563LL);
  if ( (int)BiTranslateObjectIdentifier(a1, P, v18) < 0 )
    goto LABEL_20;
  v10 = *a4;
  v11 = 0LL;
  v12 = (char *)*a3;
  v13 = v18[0];
  if ( !*a4 )
    goto LABEL_10;
  v14 = *a3;
  do
  {
    if ( *v14 == v18[0] )
      break;
    v11 = (unsigned int)(v11 + 1);
    ++v14;
  }
  while ( (unsigned int)v11 < v10 );
  if ( !(_DWORD)v11 )
    goto LABEL_20;
  if ( (_DWORD)v11 == v10 )
LABEL_10:
    ++v10;
  Pool2 = (_DWORD *)ExAllocatePool2(0x102uLL, 4LL * v10, 0x4B444342u);
  v16 = Pool2;
  if ( !Pool2 )
  {
    v9 = -1073741670;
    goto LABEL_21;
  }
  *Pool2 = v13;
  if ( (_DWORD)v11 )
    memmove(Pool2 + 1, v12, 4 * v11);
  if ( (unsigned int)v11 < v10 - 1 )
    memmove(&v16[v11 + 1], &v12[4 * v11 + 4], 4LL * (v10 - (unsigned int)v11 - 1));
  if ( *a3 )
    ExFreePoolWithTag(*a3, 0x4B444342u);
  *a3 = v16;
  *a4 = v10;
LABEL_20:
  v9 = 0;
LABEL_21:
  if ( P )
    ExFreePoolWithTag(P, 0x4B444342u);
  return v9;
}
