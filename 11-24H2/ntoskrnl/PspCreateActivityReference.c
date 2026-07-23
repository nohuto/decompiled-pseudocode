/*
 * XREFs of PspCreateActivityReference @ 0x140A71370
 * Callers:
 *     NtAcquireProcessActivityReference @ 0x140A71250 (NtAcquireProcessActivityReference.c)
 * Callees:
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     PsChargeProcessWakeCounter @ 0x1408983D0 (PsChargeProcessWakeCounter.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
 */

__int64 __fastcall PspCreateActivityReference(void *a1, __int64 a2)
{
  char PreviousMode; // r9
  __int64 result; // rax
  struct _FILE_OBJECT *v6; // rbx
  __int64 v7; // [rsp+20h] [rbp-60h]
  _QWORD v8[3]; // [rsp+50h] [rbp-30h] BYREF
  int v9; // [rsp+68h] [rbp-18h]
  int v10; // [rsp+6Ch] [rbp-14h]
  __int128 v11; // [rsp+70h] [rbp-10h]
  PVOID Object; // [rsp+A0h] [rbp+20h] BYREF

  v10 = 0;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v8[1] = 0LL;
  v8[2] = 0LL;
  v8[0] = 48LL;
  v9 = 32;
  v11 = 0LL;
  result = ObCreateObjectEx(
             0,
             (_DWORD *)PspActivityReferenceObjectType,
             (int)v8,
             PreviousMode,
             v7,
             8,
             0,
             8,
             &Object,
             0LL);
  if ( (int)result >= 0 )
  {
    v6 = (struct _FILE_OBJECT *)Object;
    *(_QWORD *)&v6->Type = PsChargeProcessWakeCounter(a1);
    return ObInsertObjectEx(v6, 0LL, 983040, 0, 0, 0LL, a2);
  }
  return result;
}
