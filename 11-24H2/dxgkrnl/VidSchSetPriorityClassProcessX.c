/*
 * XREFs of VidSchSetPriorityClassProcessX @ 0x140187170
 * Callers:
 *     ?SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z @ 0x1403E8F4C (-SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?VidSchSetPriorityClassProcess@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@W4_D3DKMT_SCHEDULINGPRIORITYCLASS@@H@Z @ 0x14005A994 (-VidSchSetPriorityClassProcess@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@W4_D3DKMT_SCHEDULINGPRIORITYC.c)
 */

__int64 __fastcall VidSchSetPriorityClassProcessX(struct DXGPROCESS *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // edi
  __int64 i; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 result; // rax

  v3 = 0;
  for ( i = 0LL; (unsigned int)i < 2; i = (unsigned int)(i + 1) )
  {
    if ( *((_QWORD *)DXGGLOBAL::GetGlobal() + i + 34) )
    {
      Global = DXGGLOBAL::GetGlobal();
      result = VIDSCH_EXPORT::VidSchSetPriorityClassProcess(*((VIDSCH_EXPORT **)Global + i + 34), a1, a2, a3);
      v3 = result;
      if ( (int)result < 0 )
        return result;
    }
  }
  return v3;
}
