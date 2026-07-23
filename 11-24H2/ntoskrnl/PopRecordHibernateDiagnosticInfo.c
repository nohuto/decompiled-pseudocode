/*
 * XREFs of PopRecordHibernateDiagnosticInfo @ 0x140B5FBD4
 * Callers:
 *     PopRequestWrite @ 0x140B60100 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x140B60AA8 (PopWriteHiberPages.c)
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
  LOBYTE(PopHibernateDiagnosticInfo) = byte_140F0B676;
  v3 = 0;
  qword_140F0D2C8 = qword_140F0C158;
  v4 = 0;
  qword_140F0D2D0 = qword_140F0C160;
  qword_140F0D2D8 = qword_140F0C180;
  qword_140F0D2E0 = qword_140F0C170;
  qword_140F0D2E8 = qword_140F0C168;
  qword_140F0D2F0 = qword_140F0C188;
  qword_140F0D2F8 = qword_140F0C178;
  qword_140F0D300 = qword_140F0C190;
  dword_140F0D308 = dword_140F0C198;
  result = (unsigned int)dword_140F0BBC4;
  dword_140F0D314 = dword_140F0BBC4;
  for ( qword_140F0D30C = 0LL; v4 < *(_DWORD *)(a1 + 288); HIDWORD(qword_140F0D30C) = v3 )
  {
    v6 = v4++;
    v7 = 168 * v6;
    v1 += *(_DWORD *)(*(_QWORD *)(a1 + 296) + 168 * v6 + 160);
    LODWORD(qword_140F0D30C) = v1;
    result = *(_QWORD *)(a1 + 296);
    v3 += *(_DWORD *)(result + v7 + 164);
  }
  return result;
}
