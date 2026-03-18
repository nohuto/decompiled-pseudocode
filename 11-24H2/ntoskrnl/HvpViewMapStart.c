/*
 * XREFs of HvpViewMapStart @ 0x140982AE8
 * Callers:
 *     HvHiveStartEmptyClone @ 0x1407DF280 (HvHiveStartEmptyClone.c)
 *     HvLoadHive @ 0x14098133C (HvLoadHive.c)
 * Callees:
 *     CmSiGetSectionLength @ 0x140491C80 (CmSiGetSectionLength.c)
 *     CmSiCreateSectionForFile @ 0x140493DA4 (CmSiCreateSectionForFile.c)
 *     HvpViewMapCreateViewsForRegion @ 0x14097F77C (HvpViewMapCreateViewsForRegion.c)
 */

int __fastcall HvpViewMapStart(__int64 a1, void *a2, int a3, __int64 a4, int a5)
{
  char v5; // al
  int result; // eax
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v5 = a5;
  *(_DWORD *)(a1 + 32) = a5;
  *(_QWORD *)(a1 + 24) = a4;
  v11 = 0LL;
  result = CmSiCreateSectionForFile((HANDLE *)a1, (v5 & 1) != 0 ? 5 : 23, 2 * !(v5 & 1) + 2, a4, a2);
  if ( result >= 0 )
  {
    result = CmSiGetSectionLength(*(_QWORD *)a1, &v11);
    if ( result >= 0 )
    {
      v9 = v11;
      *(_QWORD *)(a1 + 16) = v11;
      if ( v9 < 4096 )
      {
        return -1073741492;
      }
      else
      {
        v10 = (unsigned int)(a3 + 4096);
        *(_QWORD *)(a1 + 8) = v10;
        result = HvpViewMapCreateViewsForRegion(a1, 4096LL, v10, 1);
        if ( result >= 0 )
          return 0;
      }
    }
  }
  return result;
}
