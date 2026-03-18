/*
 * XREFs of ?IsAnyThreadAttached@tagQ@@QEBA_NXZ @ 0x140106314
 * Callers:
 *     UserDeleteW32Thread @ 0x1400590C0 (UserDeleteW32Thread.c)
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 *     zzzDestroyQueue @ 0x140161AA0 (zzzDestroyQueue.c)
 * Callees:
 *     <none>
 */

char __fastcall tagQ::IsAnyThreadAttached(tagQ *this)
{
  char result; // al

  result = 0;
  if ( *((_QWORD *)this + 66) || *((_QWORD *)this + 67) )
    return 1;
  return result;
}
