/*
 * XREFs of ??0_lambda_163dbea914ec29e3eb0ae38e4a9291a3_@@QEAA@QEAVIdentityManager@ContentManagement@@AEBV?$MoveOnCopy@VHString@Wrappers@WRL@Microsoft@@@Internal@Windows@@@Z @ 0x1800287D0
 * Callers:
 *     ?TryGetSecondaryMSATicketAsync@IdentityManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@@Z @ 0x18003C300 (-TryGetSecondaryMSATicketAsync@IdentityManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAU-$I.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _lambda_163dbea914ec29e3eb0ae38e4a9291a3_::_lambda_163dbea914ec29e3eb0ae38e4a9291a3_(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // rax
  __int64 result; // rax

  v3 = *a3;
  *a3 = 0LL;
  *(_QWORD *)(a1 + 8) = v3;
  result = a1;
  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 16) = 0;
  *((_BYTE *)a3 + 8) = 1;
  return result;
}
