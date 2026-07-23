/*
 * XREFs of PopEtEnergyContextSetState @ 0x14099BAF0
 * Callers:
 *     PoSetProcessEnergyTrackingState @ 0x14099B460 (PoSetProcessEnergyTrackingState.c)
 *     PoEnergyContextUpdateComponentPower @ 0x14099B564 (PoEnergyContextUpdateComponentPower.c)
 * Callees:
 *     RtlStateDurationUpdate @ 0x140488628 (RtlStateDurationUpdate.c)
 *     PopEtStringSet @ 0x14099BF40 (PopEtStringSet.c)
 *     RtlInternEntryDereference @ 0x14099C800 (RtlInternEntryDereference.c)
 *     PopEtEnergyContextProcessStateUpdate @ 0x14099CF68 (PopEtEnergyContextProcessStateUpdate.c)
 *     PopEtStringIntern @ 0x14099D320 (PopEtStringIntern.c)
 */

__int64 __fastcall PopEtEnergyContextSetState(__int64 a1, _DWORD *a2)
{
  int v2; // eax
  __int64 v3; // rbp
  __int64 v4; // rbx
  char v7; // r14
  _DWORD *v8; // rcx
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // edi
  unsigned int v12; // edi
  int v14; // eax
  unsigned __int64 v15; // rbx
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v2 = a2[3];
  v3 = *(_QWORD *)(a1 + 1640);
  v4 = 0LL;
  v16 = 0LL;
  v7 = 0;
  if ( (v2 & 1) == 0 )
    goto LABEL_7;
  v8 = a2 + 4;
  v9 = -1LL;
  do
    ++v9;
  while ( *((_WORD *)v8 + v9) );
  if ( !v9 || (v14 = PopEtStringIntern(v8, v9, &v16), v4 = v16, v12 = v14, v14 >= 0) )
  {
    if ( *(_QWORD *)(v3 + 464) != v4 )
    {
      PopEtStringSet(v3 + 464, v4);
      v7 = 1;
    }
LABEL_7:
    v10 = *(_DWORD *)(v3 + 472);
    v11 = a2[1] | (unsigned __int16)(v10 & ~(unsigned __int16)*a2);
    if ( (unsigned __int16)v10 == v11 )
    {
      if ( !v7 )
      {
LABEL_10:
        v12 = 0;
        goto LABEL_11;
      }
    }
    else
    {
      v15 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      RtlStateDurationUpdate((unsigned __int64 *)(v3 + 120), (v11 & 4) != 0, v15);
      RtlStateDurationUpdate((unsigned __int64 *)(v3 + 416), (v11 & 8) != 0, v15);
      v4 = v16;
      *(_WORD *)(v3 + 472) = v11;
    }
    PopEtEnergyContextProcessStateUpdate(a1);
    goto LABEL_10;
  }
LABEL_11:
  if ( v4 )
    RtlInternEntryDereference(PopEtGlobals + 56);
  return v12;
}
