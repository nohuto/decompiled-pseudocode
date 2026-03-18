/*
 * XREFs of ??$swap_helper@$09@?$expandable_buffer_base@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09@detail@@QEAA_NAEAV01@@Z @ 0x180286740
 * Callers:
 *     ??$swap@$09@?$expandable_buffer_base@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09@detail@@QEAA_NAEAV01@@Z @ 0x1802865B4 (--$swap@$09@-$expandable_buffer_base@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09@det.c)
 * Callees:
 *     <none>
 */

char __fastcall detail::expandable_buffer_base<CCpuClipAntialiasSinkContext::SinkRenderParameters,10>::swap_helper<10>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // r11
  _QWORD *v4; // r9
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  char result; // al

  if ( (_QWORD *)*a1 == a1 + 3 )
    return 0;
  v2 = (_QWORD *)*a2;
  if ( (_QWORD *)*a2 != a2 + 3 )
    return 0;
  v3 = (_QWORD *)a2[1];
  if ( 0xCCCCCCCCCCCCCCCDuLL * (v3 - v2) > 0xA )
    return 0;
  v4 = a1 + 3;
  while ( v2 != v3 )
  {
    v5 = *v2;
    *v2 = 0LL;
    *v4 = v5;
    *((_DWORD *)v4 + 2) = *((_DWORD *)v2 + 2);
    *((_DWORD *)v4 + 3) = *((_DWORD *)v2 + 3);
    v6 = v2[2];
    v2[2] = 0LL;
    v4[2] = v6;
    v7 = v2[3];
    v2[3] = 0LL;
    v4[3] = v7;
    *((_BYTE *)v4 + 32) = *((_BYTE *)v2 + 32);
    *((_BYTE *)v4 + 33) = *((_BYTE *)v2 + 33);
    v4 += 5;
    v2 += 5;
  }
  *a2 = *a1;
  a2[1] = a1[1];
  a2[2] = a1[2];
  a1[2] = a1 + 53;
  result = 1;
  *a1 = a1 + 3;
  a1[1] = v4;
  return result;
}
