/*
 * XREFs of DxgkEtwShutdown @ 0x140070DBC
 * Callers:
 *     DxgkUnload @ 0x1401CBE90 (DxgkUnload.c)
 * Callees:
 *     McGenEventUnregister_EtwUnregister @ 0x140070DE0 (McGenEventUnregister_EtwUnregister.c)
 */

__int64 DxgkEtwShutdown()
{
  __int64 result; // rax

  result = McGenEventUnregister_EtwUnregister(&DxgkControlGuid_Context);
  DxgkControlGuid_Context = 0LL;
  return result;
}
