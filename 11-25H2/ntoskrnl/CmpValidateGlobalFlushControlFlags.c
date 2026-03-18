/*
 * XREFs of CmpValidateGlobalFlushControlFlags @ 0x1407C8884
 * Callers:
 *     CmInitSystem1 @ 0x140C33C44 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

void CmpValidateGlobalFlushControlFlags()
{
  if ( (CmpGlobalFlushControlFlags & 0xFFFFFFFE) != 0 )
    CmpGlobalFlushControlFlags = 0;
}
