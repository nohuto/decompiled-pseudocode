/*
 * XREFs of DisableUserkTraceLogging @ 0x14028B460
 * Callers:
 *     <none>
 * Callees:
 *     TlgUnregisterAggregateProvider @ 0x1403D0CD8 (TlgUnregisterAggregateProvider.c)
 */

NTSTATUS DisableUserkTraceLogging()
{
  REGHANDLE v0; // rcx
  REGHANDLE v1; // rcx
  REGHANDLE v2; // rcx
  REGHANDLE v3; // rcx

  v0 = qword_140398BD8;
  qword_140398BD8 = 0LL;
  dword_140398BB8 = 0;
  EtwUnregister(v0);
  TlgUnregisterAggregateProvider();
  v1 = RegHandle;
  RegHandle = 0LL;
  dword_140398B80 = 0;
  EtwUnregister(v1);
  v2 = qword_140398C48;
  qword_140398C48 = 0LL;
  dword_140398C28 = 0;
  EtwUnregister(v2);
  v3 = qword_140398C80;
  qword_140398C80 = 0LL;
  dword_140398C60 = 0;
  return EtwUnregister(v3);
}
