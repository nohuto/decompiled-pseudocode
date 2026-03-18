/*
 * XREFs of SeCopyClientToken @ 0x14089E9B0
 * Callers:
 *     SepCopyClientTokenAndSetSilo @ 0x1407804D4 (SepCopyClientTokenAndSetSilo.c)
 *     SepCreateClientSecurityEx @ 0x1408A6AF0 (SepCreateClientSecurityEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 *     SepDuplicateToken @ 0x1408A2910 (SepDuplicateToken.c)
 *     SepFinalizeTokenAcls @ 0x1408A4398 (SepFinalizeTokenAcls.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1408A43D0 (SepAppendAceToTokenObjectAcl.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeCopyClientToken(int a1, int a2, __int64 a3, char a4, unsigned __int8 *Src, PVOID *a6)
{
  int inserted; // ebx
  void *v9; // rdi
  _QWORD *v10; // rsi
  void *v11; // rcx
  PVOID v12; // rcx
  unsigned int v13; // r14d
  void *Pool2; // rax
  unsigned int v15; // ecx
  int appended; // eax
  PVOID Object; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v18[4]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v19; // [rsp+68h] [rbp-18h]

  v18[0] = 48LL;
  Object = 0LL;
  memset(&v18[1], 0, 24);
  v19 = 0LL;
  inserted = SepDuplicateToken(a1, (unsigned int)v18, 0, 2, a2, 0, 0, (__int64)&Object);
  if ( inserted < 0 )
    goto LABEL_2;
  if ( a4 )
  {
    v9 = 0LL;
    v10 = Object;
    if ( Src )
    {
      v13 = 4 * Src[1] + 8;
      Pool2 = (void *)ExAllocatePool2(0x100uLL);
      v9 = Pool2;
      if ( !Pool2 )
      {
        inserted = -1073741670;
        goto LABEL_2;
      }
      v15 = 4 * Src[1] + 8;
      if ( v15 <= v13 )
        memmove(Pool2, Src, v15);
    }
    v11 = (void *)v10[138];
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
    v10[138] = v9;
  }
  inserted = ObInsertObjectEx(Object, 0LL, 0, 0LL, 0LL);
  if ( inserted >= 0 )
  {
    v12 = Object;
    if ( (*((_DWORD *)Object + 50) & 0x4000) == 0
      || !*((_QWORD *)Object + 98)
      || (appended = SepAppendAceToTokenObjectAcl((ULONG_PTR)Object), v12 = Object, inserted = appended, appended >= 0) )
    {
      SepFinalizeTokenAcls(v12);
      *a6 = Object;
      return (unsigned int)inserted;
    }
    ObfDereferenceObject(Object);
  }
LABEL_2:
  *a6 = 0LL;
  return (unsigned int)inserted;
}
