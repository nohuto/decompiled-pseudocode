/*
 * XREFs of ?ApplyBlockRunRestrictions@VIDMM_LINEAR_POOL@@IEAAXPEA_NPEA_K1_KKE22@Z @ 0x1400E0080
 * Callers:
 *     ?GetLargestGap@VIDMM_LINEAR_POOL@@QEAA_K_KKE00@Z @ 0x1400DFF4C (-GetLargestGap@VIDMM_LINEAR_POOL@@QEAA_K_KKE00@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_LINEAR_POOL::ApplyBlockRunRestrictions(
        VIDMM_LINEAR_POOL *this,
        bool *a2,
        unsigned __int64 *a3,
        VIDMM_LINEAR_POOL **a4,
        unsigned __int64 a5,
        unsigned int a6,
        char a7,
        unsigned __int64 a8,
        VIDMM_LINEAR_POOL *a9)
{
  __int64 v12; // r8
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax

  if ( a8 )
  {
    if ( a8 >= (unsigned __int64)*a4 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(this);
        WdLogGlobalForLineNumber = 820;
        *a2 = 1;
        return;
      }
LABEL_6:
      *a2 = 1;
      return;
    }
    if ( a8 > *a3 )
    {
      *a3 = a8;
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(this);
        WdLogGlobalForLineNumber = 832;
        v19 = WdLogNewEntry5_WdTrace(v18);
        *(_QWORD *)(v19 + 24) = *a3;
        this = *a4;
        *(_QWORD *)(v19 + 32) = *a4;
        WdLogGlobalForLineNumber = 835;
      }
    }
  }
  if ( a9 )
  {
    if ( (unsigned __int64)a9 <= *a3 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(this);
        WdLogGlobalForLineNumber = 851;
      }
      goto LABEL_6;
    }
    if ( a9 < *a4 )
    {
      *a4 = a9;
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(this);
        WdLogGlobalForLineNumber = 863;
        v21 = WdLogNewEntry5_WdTrace(v20);
        *(_QWORD *)(v21 + 24) = *a3;
        this = *a4;
        *(_QWORD *)(v21 + 32) = *a4;
        WdLogGlobalForLineNumber = 866;
      }
    }
  }
  if ( !a7 )
  {
    v15 = 0LL;
    if ( a6 )
    {
      this = (VIDMM_LINEAR_POOL *)a6;
      v15 = ((unsigned __int64)*a4 - a5) % a6;
    }
    v16 = (unsigned __int64)*a4 - v15 - a5;
    if ( v16 < *a3 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(this);
        WdLogGlobalForLineNumber = 919;
      }
      goto LABEL_6;
    }
    *a3 = v16;
    if ( g_IsInternalReleaseOrDbg )
    {
      v17 = WdLogNewEntry5_WdTrace(this);
      *(_QWORD *)(v17 + 24) = *a3;
      *(_QWORD *)(v17 + 32) = *a4;
      WdLogGlobalForLineNumber = 928;
    }
    goto LABEL_13;
  }
  if ( !a6 || (v12 = *a3, this = (VIDMM_LINEAR_POOL *)a6, (v13 = *a3 % a6) == 0) )
  {
LABEL_11:
    if ( g_IsInternalReleaseOrDbg )
    {
      v14 = WdLogNewEntry5_WdTrace(this);
      *(_QWORD *)(v14 + 24) = *a3;
      *(_QWORD *)(v14 + 32) = *a4;
      WdLogGlobalForLineNumber = 902;
    }
LABEL_13:
    *a2 = 0;
    return;
  }
  this = (VIDMM_LINEAR_POOL *)(a6 - v13);
  if ( (VIDMM_LINEAR_POOL *)((char *)this + v12) < *a4 )
  {
    *a3 = (unsigned __int64)this + v12;
    goto LABEL_11;
  }
  if ( !g_IsInternalReleaseOrDbg )
    goto LABEL_6;
  WdLogNewEntry5_WdTrace(this);
  WdLogGlobalForLineNumber = 892;
  *a2 = 1;
}
