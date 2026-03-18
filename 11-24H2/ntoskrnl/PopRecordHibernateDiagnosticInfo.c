/*
 * XREFs of PopRecordHibernateDiagnosticInfo @ 0x140B5DB54
 * Callers:
 *     PopRequestWrite @ 0x140B5E080 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x140B5EA28 (PopWriteHiberPages.c)
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
  LOBYTE(PopHibernateDiagnosticInfo) = byte_140F0BB56;
  v3 = 0;
  qword_140F0CFE8 = qword_140F0B518;
  v4 = 0;
  qword_140F0CFF0 = qword_140F0B520;
  qword_140F0CFF8 = qword_140F0B540;
  qword_140F0D000 = qword_140F0B530;
  qword_140F0D008 = qword_140F0B528;
  qword_140F0D010 = qword_140F0B548;
  qword_140F0D018 = qword_140F0B538;
  qword_140F0D020 = qword_140F0B550;
  dword_140F0D028 = dword_140F0B558;
  result = (unsigned int)dword_140F0AD84;
  dword_140F0D034 = dword_140F0AD84;
  for ( qword_140F0D02C = 0LL; v4 < *(_DWORD *)(a1 + 288); HIDWORD(qword_140F0D02C) = v3 )
  {
    v6 = v4++;
    v7 = 168 * v6;
    v1 += *(_DWORD *)(*(_QWORD *)(a1 + 296) + 168 * v6 + 160);
    LODWORD(qword_140F0D02C) = v1;
    result = *(_QWORD *)(a1 + 296);
    v3 += *(_DWORD *)(result + v7 + 164);
  }
  return result;
}
