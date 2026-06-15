/*
 * XREFs of ?DevQueryResultCallback@@YAXPEAUHDEVQUERY__@@PEAXPEBU_DEV_QUERY_RESULT_ACTION_DATA@@@Z @ 0x1800E95D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x180029154 (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ?NewNode@?$CAtlList@PEAGV?$CElementTraits@PEAG@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAGPEAV312@1@Z @ 0x1800E9A2C (-NewNode@-$CAtlList@PEAGV-$CElementTraits@PEAG@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAGPEAV312@1@Z.c)
 */

void __fastcall DevQueryResultCallback(struct HDEVQUERY__ *a1, _DWORD *a2, const WCHAR **a3)
{
  __int64 v3; // rcx
  __int64 *v5; // rdi
  __int64 v6; // rax
  __int64 *v7; // rcx
  LPVOID v8; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(unsigned int *)a3;
  v8 = 0LL;
  if ( (_DWORD)v3 )
  {
    if ( (_DWORD)v3 == 1 && *((_DWORD *)a3 + 2) == 1 )
    {
      if ( (int)_AllocString<CTCoAllocPolicy>(v3, (__int64)a2, a3[2], &v8) < 0 )
      {
        CoTaskMemFree(v8);
        return;
      }
      v5 = *(__int64 **)a2;
      v6 = ATL::CAtlList<unsigned short *,ATL::CElementTraits<unsigned short *>>::NewNode(v5, &v8, v5[1]);
      v7 = (__int64 *)v5[1];
      if ( v7 )
        *v7 = v6;
      else
        *v5 = v6;
      v5[1] = v6;
    }
  }
  else
  {
    a2[2] = *((_DWORD *)a3 + 2);
  }
  CoTaskMemFree(0LL);
}
