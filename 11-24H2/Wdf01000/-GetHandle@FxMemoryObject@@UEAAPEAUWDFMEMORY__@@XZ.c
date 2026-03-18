/*
 * XREFs of ?GetHandle@FxMemoryObject@@UEAAPEAUWDFMEMORY__@@XZ @ 0x1400688E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WDFMEMORY__ *__fastcall FxMemoryObject::GetHandle(FxMemoryObject *this)
{
  WDFMEMORY__ *result; // rax

  result = (WDFMEMORY__ *)((unsigned __int64)&this[-1].m_Globals ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !*((_WORD *)&this[-1].m_Globals + 5) )
    return 0LL;
  return result;
}
