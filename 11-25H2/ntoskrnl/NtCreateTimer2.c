/*
 * XREFs of NtCreateTimer2 @ 0x140A16540
 * Callers:
 *     NtCreateIRTimer @ 0x1407ABEE0 (NtCreateIRTimer.c)
 * Callees:
 *     KeInitializeTimer2 @ 0x14036F140 (KeInitializeTimer2.c)
 *     ExpExTimerAttributesAreValid @ 0x14036F2DC (ExpExTimerAttributesAreValid.c)
 *     KeInitializeIRTimer @ 0x1404C4448 (KeInitializeIRTimer.c)
 *     RtlCopyVolatileMemory @ 0x1406AAA20 (RtlCopyVolatileMemory.c)
 *     ObCreateObjectEx @ 0x14085BE20 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 *     ExpCheckIRTimerAccess @ 0x140A1671C (ExpCheckIRTimerAccess.c)
 */

__int64 __fastcall NtCreateTimer2(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  __int64 v7; // rdx
  _DWORD *v8; // r10
  __int64 v9; // r11
  char PreviousMode; // si
  __int64 v11; // rcx
  int inserted; // ecx
  _QWORD *v13; // rbx
  __int64 result; // rax
  __int64 v15; // [rsp+20h] [rbp-58h]
  unsigned __int16 v16[4]; // [rsp+50h] [rbp-28h] BYREF
  PVOID Object; // [rsp+58h] [rbp-20h] BYREF
  __int64 v18; // [rsp+60h] [rbp-18h] BYREF

  v18 = 0LL;
  Object = 0LL;
  if ( !ExpExTimerAttributesAreValid(a4) )
    return 3221225714LL;
  if ( v9 )
    return 3221225713LL;
  if ( v8 && (a4 & 2) == 0 )
    return 3221225712LL;
  *(_DWORD *)v16 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    v11 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v11 = (__int64)a1;
    *(_QWORD *)v11 = *(_QWORD *)v11;
    if ( v8 )
    {
      if ( (unsigned __int64)v8 < 0x7FFFFFFF0000LL )
        v7 = (__int64)v8;
      RtlCopyVolatileMemory(v16, (const void *)v7, 4uLL);
    }
  }
  else if ( v8 )
  {
    *(_DWORD *)v16 = *v8;
  }
  if ( (a4 & 2) == 0
    || (LOBYTE(v7) = PreviousMode, result = ExpCheckIRTimerAccess(*(unsigned int *)v16, v7), (int)result >= 0) )
  {
    inserted = ObCreateObjectEx(PreviousMode, ExpIRTimerObjectType, 0, PreviousMode, v15, 168, 0, 0, &Object, 0LL);
    if ( inserted >= 0 )
    {
      v13 = Object;
      if ( (a4 & 2) != 0 )
        KeInitializeIRTimer((unsigned __int64)Object, 0LL, 0LL, v16, a4);
      else
        KeInitializeTimer2((__int64)Object, 0LL, 0LL, a4);
      v13[17] = 0LL;
      *((_DWORD *)v13 + 40) = a4;
      inserted = ObInsertObjectEx((char *)v13, 0LL, a5, 0, 0, 0LL, (__int64)&v18);
      LODWORD(Object) = inserted;
      if ( inserted >= 0 )
        *a1 = v18;
    }
    return (unsigned int)inserted;
  }
  return result;
}
