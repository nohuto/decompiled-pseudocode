/*
 * XREFs of RtlpFcMapSingleBuffer @ 0x18009FA80
 * Callers:
 *     RtlpFcUpdateLocalConfiguration @ 0x18009F820 (RtlpFcUpdateLocalConfiguration.c)
 * Callees:
 *     ZwMapViewOfSection @ 0x180163720 (ZwMapViewOfSection.c)
 */

NTSTATUS __fastcall RtlpFcMapSingleBuffer(_QWORD *a1, _QWORD *a2)
{
  void *v4; // rcx
  NTSTATUS result; // eax
  PVOID v6; // [rsp+60h] [rbp+8h] BYREF
  ULONG_PTR v7; // [rsp+70h] [rbp+18h] BYREF

  v4 = (void *)a1[1];
  if ( v4 )
  {
    v6 = 0LL;
    v7 = 0LL;
    result = ZwMapViewOfSection(v4, (HANDLE)0xFFFFFFFFFFFFFFFFLL, &v6, 0LL, 0LL, 0LL, &v7, ViewShare, 0, 2u);
    if ( result < 0 )
      return result;
    *a2 = 0LL;
    a2[2] = 0LL;
    a2[1] = v6;
    a2[2] = a1[2];
    *a2 = *a1;
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
    *a2 = *a1;
  }
  return 0;
}
