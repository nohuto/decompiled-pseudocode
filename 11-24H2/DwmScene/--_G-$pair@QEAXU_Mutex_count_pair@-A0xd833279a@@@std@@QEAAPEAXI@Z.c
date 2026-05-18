/*
 * XREFs of ??_G?$pair@QEAXU_Mutex_count_pair@?A0xd833279a@@@std@@QEAAPEAXI@Z @ 0x1800178B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 */

void *__fastcall std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(a1);
  return a1;
}
