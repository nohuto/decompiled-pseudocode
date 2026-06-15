/*
 * XREFs of s_GetHeadRotation @ 0x1800FA640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall s_GetHeadRotation(__int64 **this, float *a2, float *a3, float *a4, float *a5)
{
  return CHMDManager::GetHeadRotation(this, a2, a3, a4, a5);
}
