/*
 * XREFs of ?Serialize@AlpcSection@@UEAAXPEAUSectionData@XboxProxyStateData@@@Z @ 0x18010E820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AlpcSection::Serialize(AlpcSection *this, struct XboxProxyStateData::SectionData *a2)
{
  __int128 v2; // xmm0

  v2 = *(_OWORD *)((char *)this + 56);
  *((_DWORD *)this + 22) = 3;
  *(_OWORD *)a2 = v2;
  *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)this + 72);
  *((_QWORD *)a2 + 4) = *((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = 0LL;
}
