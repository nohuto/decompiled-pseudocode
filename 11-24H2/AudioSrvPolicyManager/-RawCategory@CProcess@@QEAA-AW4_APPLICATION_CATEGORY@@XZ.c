/*
 * XREFs of ?RawCategory@CProcess@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18003344C
 * Callers:
 *     ?RawCategory@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18001F20C (-RawCategory@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::RawCategory(unsigned int *a1)
{
  if ( a1[120] && a1[119] == 4 )
    return a1[121];
  else
    return a1[78];
}
