/*
 * XREFs of CmpFindMatchingDescriptorCell @ 0x1409763A4
 * Callers:
 *     CmpGetSecurityDescriptorNodeEx @ 0x140976170 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1409765B8 (CmpSetSecurityDescriptorInfo.c)
 * Callees:
 *     RtlLengthSecurityDescriptorStrict @ 0x14047F924 (RtlLengthSecurityDescriptorStrict.c)
 *     memcmp @ 0x1406B4C10 (memcmp.c)
 */

char __fastcall CmpFindMatchingDescriptorCell(__int64 a1, const void *a2, int a3, _DWORD *a4, int **a5)
{
  unsigned int v8; // eax
  size_t v9; // r15
  unsigned int v10; // r10d
  int v11; // edi
  _DWORD *v12; // rcx
  _DWORD *i; // r11
  _QWORD **v14; // r14
  _QWORD *v15; // rsi
  int *v16; // rbx
  int v17; // ebp

  v8 = RtlLengthSecurityDescriptorStrict();
  v9 = v8;
  v10 = v8 >> 2;
  v11 = 0;
  for ( i = v12; v10; --v10 )
    v11 = *i++ + __ROR4__(v11, 29);
  v14 = (_QWORD **)(a1 + 16LL * (v11 & 0x3F) + 1896);
  v15 = *v14;
  if ( *v14 != v14 )
  {
    while ( v15 != v14 )
    {
      v16 = (int *)(v15 - 1);
      if ( *((_DWORD *)v15 - 1) == v11 )
      {
        v17 = *v16;
        if ( a3 == (unsigned int)*v16 >> 31 && (_DWORD)v9 == v16[6] && !memcmp(a2, v16 + 8, v9) )
        {
          *a4 = v17;
          if ( a5 )
            *a5 = v16;
          return 1;
        }
      }
      v15 = (_QWORD *)*v15;
    }
  }
  return 0;
}
