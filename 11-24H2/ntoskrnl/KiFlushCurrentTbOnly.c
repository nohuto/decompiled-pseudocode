/*
 * XREFs of KiFlushCurrentTbOnly @ 0x140437D00
 * Callers:
 *     KeFlushCurrentTbOnly @ 0x14039F4A0 (KeFlushCurrentTbOnly.c)
 * Callees:
 *     KiSetUserTbFlushPending @ 0x1406AC380 (KiSetUserTbFlushPending.c)
 */

struct _KTHREAD *__fastcall KiFlushCurrentTbOnly(int a1)
{
  unsigned __int64 v1; // rcx
  struct _KTHREAD *result; // rax
  unsigned __int64 v3; // rax

  if ( KiKvaShadow )
  {
    if ( a1 != 3 && !a1 )
      goto LABEL_8;
    if ( !KiFlushPcid )
      goto LABEL_4;
  }
  else
  {
    if ( a1 == 1 )
      goto LABEL_8;
    if ( !KiFlushPcid )
    {
LABEL_4:
      v1 = __readcr4();
      if ( (v1 & 0x20080) != 0 )
      {
        result = (struct _KTHREAD *)(v1 ^ 0x80);
        __writecr4(v1 ^ 0x80);
        __writecr4(v1);
        return result;
      }
LABEL_8:
      result = (struct _KTHREAD *)__readcr3();
      __writecr3((unsigned __int64)result);
      return result;
    }
  }
  v3 = __readcr3();
  __writecr3(v3);
  result = KeGetCurrentThread();
  if ( !result->ApcState.Process->AddressPolicy )
    return (struct _KTHREAD *)KiSetUserTbFlushPending();
  return result;
}
