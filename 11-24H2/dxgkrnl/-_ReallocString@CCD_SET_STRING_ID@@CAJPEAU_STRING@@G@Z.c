/*
 * XREFs of ?_ReallocString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@G@Z @ 0x140340F14
 * Callers:
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x14034028C (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x140340D4C (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?_CopyString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@AEBU2@@Z @ 0x140340ECC (-_CopyString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@AEBU2@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 */

__int64 __fastcall CCD_SET_STRING_ID::_ReallocString(struct _STRING *a1, USHORT a2)
{
  __int64 v2; // rdi
  CHAR *v4; // rax
  CHAR *v5; // rbp
  __int64 result; // rax

  v2 = a2;
  if ( a2 <= a1->MaximumLength )
    return 0LL;
  v4 = (CHAR *)operator new[](a2, 0x63644356u, 256LL);
  v5 = v4;
  if ( v4 )
  {
    memmove(v4, a1->Buffer, a1->Length);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a1->Buffer);
    a1->Buffer = v5;
    a1->MaximumLength = v2;
    return 0LL;
  }
  WdLogSingleEntry1(6LL, v2);
  result = 3221225495LL;
  WdLogGlobalForLineNumber = 1863;
  return result;
}
