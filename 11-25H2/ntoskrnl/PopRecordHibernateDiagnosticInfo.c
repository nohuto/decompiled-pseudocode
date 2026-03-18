/*
 * XREFs of PopRecordHibernateDiagnosticInfo @ 0x140B4DA90
 * Callers:
 *     PopRequestWrite @ 0x140B4DFC0 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x140B4E968 (PopWriteHiberPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopRecordHibernateDiagnosticInfo(__int64 a1)
{
  int v1; // edx
  int v3; // r10d
  unsigned int v4; // r8d
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rcx

  v1 = 0;
  LOBYTE(PopHibernateDiagnosticInfo) = byte_140F0B8D6;
  v3 = 0;
  qword_140F0C9A8 = qword_140F0B278;
  v4 = 0;
  qword_140F0C9B0 = qword_140F0B280;
  qword_140F0C9B8 = qword_140F0B2A0;
  qword_140F0C9C0 = qword_140F0B290;
  qword_140F0C9C8 = qword_140F0B288;
  qword_140F0C9D0 = qword_140F0B2A8;
  qword_140F0C9D8 = qword_140F0B298;
  qword_140F0C9E0 = qword_140F0B2B0;
  dword_140F0C9E8 = dword_140F0B2B8;
  result = (unsigned int)dword_140F0ADA4;
  dword_140F0C9F4 = dword_140F0ADA4;
  for ( qword_140F0C9EC = 0LL; v4 < *(_DWORD *)(a1 + 288); HIDWORD(qword_140F0C9EC) = v3 )
  {
    v6 = v4++;
    v7 = 168 * v6;
    v1 += *(_DWORD *)(*(_QWORD *)(a1 + 296) + 168 * v6 + 160);
    LODWORD(qword_140F0C9EC) = v1;
    result = *(_QWORD *)(a1 + 296);
    v3 += *(_DWORD *)(result + v7 + 164);
  }
  return result;
}
