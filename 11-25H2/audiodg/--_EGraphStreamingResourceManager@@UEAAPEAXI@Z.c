/*
 * XREFs of ??_EGraphStreamingResourceManager@@UEAAPEAXI@Z @ 0x140012D10
 * Callers:
 *     <none>
 * Callees:
 *     ??1GraphStreamingResourceManager@@UEAA@XZ @ 0x140012D4C (--1GraphStreamingResourceManager@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

GraphStreamingResourceManager *__fastcall GraphStreamingResourceManager::`vector deleting destructor'(
        GraphStreamingResourceManager *this,
        char a2)
{
  GraphStreamingResourceManager::~GraphStreamingResourceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
