/*
 * XREFs of ??_E?$EventInvocationContextProvider@$00@details@wil@@UEAAPEAXI@Z @ 0x1802199A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$EventInvocationContextProvider@$00@details@wil@@UEAA@XZ @ 0x1802CDA38 (--1-$EventInvocationContextProvider@$00@details@wil@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall wil::details::EventInvocationContextProvider<1>::`vector deleting destructor'(void *a1, char a2)
{
  wil::details::EventInvocationContextProvider<1>::~EventInvocationContextProvider<1>();
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x50);
  return a1;
}
