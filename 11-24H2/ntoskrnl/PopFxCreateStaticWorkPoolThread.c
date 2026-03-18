/*
 * XREFs of PopFxCreateStaticWorkPoolThread @ 0x14074DB20
 * Callers:
 *     PopFxInitializeWorkPool @ 0x14074E060 (PopFxInitializeWorkPool.c)
 * Callees:
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     PsCreateSystemThreadEx @ 0x140A224A0 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall PopFxCreateStaticWorkPoolThread(__int64 a1)
{
  int v1; // ebx
  _QWORD v3[3]; // [rsp+50h] [rbp-30h] BYREF
  int v4; // [rsp+68h] [rbp-18h]
  int v5; // [rsp+6Ch] [rbp-14h]
  __int128 v6; // [rsp+70h] [rbp-10h]
  HANDLE Handle; // [rsp+98h] [rbp+18h] BYREF

  v5 = 0;
  Handle = 0LL;
  v3[1] = 0LL;
  v3[2] = 0LL;
  v3[0] = 48LL;
  v4 = 512;
  v6 = 0LL;
  v1 = PsCreateSystemThreadEx(&Handle, 0x1FFFFFLL, v3, 0LL, 0LL, PopFxStaticWorkPoolThread, a1, 0LL, 0LL);
  if ( v1 >= 0 )
    ZwClose(Handle);
  return (unsigned int)v1;
}
