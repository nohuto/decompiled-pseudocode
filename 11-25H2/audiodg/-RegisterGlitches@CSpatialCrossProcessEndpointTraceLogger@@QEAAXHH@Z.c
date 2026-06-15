/*
 * XREFs of ?RegisterGlitches@CSpatialCrossProcessEndpointTraceLogger@@QEAAXHH@Z @ 0x14003E078
 * Callers:
 *     ?CheckGlitches@CSpatialCrossProcessBaseEndpoint@@IEAAXXZ @ 0x1400314F4 (-CheckGlitches@CSpatialCrossProcessBaseEndpoint@@IEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::RegisterGlitches(
        CSpatialCrossProcessEndpointTraceLogger *this,
        int a2,
        int a3)
{
  char *v3; // rbx
  int v5; // [rsp+38h] [rbp+10h] BYREF

  ++*((_QWORD *)this + 11);
  v3 = (char *)this + 256;
  v5 = 1;
  if ( a2 )
  {
    (**(void (__fastcall ***)(char *, __int64, int *))v3)((char *)this + 256, 1LL, &v5);
    (**(void (__fastcall ***)(char *, _QWORD, int *))v3)(v3, 0LL, &v5);
  }
  if ( a3 )
  {
    (**(void (__fastcall ***)(char *, __int64, int *))v3)(v3, 2LL, &v5);
    (**(void (__fastcall ***)(char *, _QWORD, int *))v3)(v3, 0LL, &v5);
  }
}
