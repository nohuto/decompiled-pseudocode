/*
 * XREFs of HvpViewMapStart @ 0x14096B2F8
 * Callers:
 *     HvHiveStartEmptyClone @ 0x1407DF7D0 (HvHiveStartEmptyClone.c)
 *     HvLoadHive @ 0x140969B4C (HvLoadHive.c)
 * Callees:
 *     CmSiGetSectionLength @ 0x14048CB20 (CmSiGetSectionLength.c)
 *     CmSiCreateSectionForFile @ 0x14048E830 (CmSiCreateSectionForFile.c)
 *     HvpViewMapCreateViewsForRegion @ 0x140967F8C (HvpViewMapCreateViewsForRegion.c)
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
    result = CmSiGetSectionLength(*(void **)a1, &v11);
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
