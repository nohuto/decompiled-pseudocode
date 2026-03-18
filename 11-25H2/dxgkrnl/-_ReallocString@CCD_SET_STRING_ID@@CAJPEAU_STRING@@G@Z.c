/*
 * XREFs of ?_ReallocString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@G@Z @ 0x14036CB04
 * Callers:
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x14036BE7C (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x14036C93C (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?_CopyString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@AEBU2@@Z @ 0x14036CABC (-_CopyString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@AEBU2@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 */

__int64 __fastcall CCD_SET_STRING_ID::_ReallocString(struct _STRING *a1, USHORT a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  CHAR *v6; // rax
  CHAR *v7; // rbp
  __int64 result; // rax

  v4 = a2;
  if ( a2 <= a1->MaximumLength )
    return 0LL;
  v6 = (CHAR *)operator new[](a2, 0x63644356u, 256LL, a4);
  v7 = v6;
  if ( v6 )
  {
    memmove(v6, a1->Buffer, a1->Length);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a1->Buffer);
    a1->Buffer = v7;
    a1->MaximumLength = v4;
    return 0LL;
  }
  WdLogSingleEntry1(6LL, v4);
  result = 3221225495LL;
  WdLogGlobalForLineNumber = 1863;
  return result;
}
