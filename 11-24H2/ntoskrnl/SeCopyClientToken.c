/*
 * XREFs of SeCopyClientToken @ 0x1408E7698
 * Callers:
 *     SepCopyClientTokenAndSetSilo @ 0x14078F764 (SepCopyClientTokenAndSetSilo.c)
 *     SepCreateClientSecurityEx @ 0x1408A0160 (SepCreateClientSecurityEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x1403EB390 (SepSetProcessTrustLabelAceForToken.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SepDuplicateToken @ 0x1408527E0 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1408E6CE0 (SepAppendAceToTokenObjectAcl.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeCopyClientToken(__int64 a1, unsigned int a2, __int64 a3, char a4, unsigned __int8 *Src, PVOID *a6)
{
  int inserted; // edi
  void *v8; // rdi
  _QWORD *v9; // rsi
  void *v10; // rcx
  ULONG_PTR *v11; // rbx
  unsigned int v13; // r14d
  void *Pool2; // rax
  unsigned int v15; // ecx
  _WORD *v16; // r8
  PVOID Object; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v18[4]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v19; // [rsp+68h] [rbp-18h]

  v18[0] = 48LL;
  Object = 0LL;
  memset(&v18[1], 0, 24);
  v19 = 0LL;
  inserted = SepDuplicateToken(a1, (int)v18, 0, 2, a2, 0, 0, &Object);
  if ( inserted < 0 )
    goto LABEL_2;
  if ( a4 )
  {
    v8 = 0LL;
    v9 = Object;
    if ( Src )
    {
      v13 = 4 * Src[1] + 8;
      Pool2 = (void *)ExAllocatePool2(0x100uLL, v13, 0x69536553u);
      v8 = Pool2;
      if ( !Pool2 )
      {
        inserted = -1073741670;
        goto LABEL_2;
      }
      v15 = 4 * Src[1] + 8;
      if ( v15 <= v13 )
        memmove(Pool2, Src, v15);
    }
    v10 = (void *)v9[138];
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
    v9[138] = v8;
  }
  inserted = ObInsertObjectEx((struct _FILE_OBJECT *)Object, 0LL, 0, 0, 0, 0LL, 0LL);
  if ( inserted < 0 )
  {
LABEL_2:
    *a6 = 0LL;
    return (unsigned int)inserted;
  }
  v11 = (ULONG_PTR *)Object;
  if ( (*((_DWORD *)Object + 50) & 0x4000) == 0 )
    goto LABEL_10;
  v16 = (_WORD *)*((_QWORD *)Object + 98);
  if ( !v16 )
    goto LABEL_10;
  inserted = SepAppendAceToTokenObjectAcl((ULONG_PTR *)Object, 983551, v16);
  if ( inserted < 0 )
  {
    ObfDereferenceObject(Object);
    goto LABEL_2;
  }
  v11 = (ULONG_PTR *)Object;
LABEL_10:
  if ( (int)SepAppendAceToTokenObjectAcl(v11, 8, SeAliasAdminsSid) >= 0 )
    SepSetProcessTrustLabelAceForToken(v11);
  *a6 = Object;
  return (unsigned int)inserted;
}
