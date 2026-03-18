/*
 * XREFs of ?ivHandlePTPInertiaPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EDE00
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00742F0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x1C00766E0 (--0ApiSetEditionCrit@@QEAA@H@Z.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C0076738 (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ?ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z @ 0x1C01E3058 (-ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z.c)
 *     FindRimDevByName @ 0x1C01EE9D4 (FindRimDevByName.c)
 *     IsRimObjectUnregistered @ 0x1C01EED78 (IsRimObjectUnregistered.c)
 */

__int64 __fastcall CBaseInput::ivHandlePTPInertiaPacket(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  __int64 v6; // rbx
  __int64 RimDevByName; // rax
  CInpPushLock *v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r9
  char v18; // [rsp+48h] [rbp+10h] BYREF

  v4 = 1;
  *(_QWORD *)(a2 + 8) = a2 + (*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFFEuLL);
  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v18, 1);
  RIMLockExclusive(a3 + 104);
  v6 = 0LL;
  if ( (unsigned __int8)IsRimObjectUnregistered(a3) )
  {
    CInpPushLock::UnLockExclusive((CInpPushLock *)(a3 + 104));
    v4 = 2;
  }
  else
  {
    RimDevByName = FindRimDevByName((PCUNICODE_STRING)a2);
    v8 = (CInpPushLock *)(a3 + 104);
    v9 = RimDevByName;
    CInpPushLock::UnLockExclusive(v8);
    if ( v9 )
    {
      v14 = *(_QWORD *)(v9 + 472);
      if ( v14 && *(_DWORD *)(v14 + 24) == 7 )
      {
        if ( *(_QWORD *)(v9 + 32) != -72LL )
          v6 = *(_QWORD *)(*(_QWORD *)(v9 + 32) + 72LL);
        v15 = SGDGetUserSessionState(v11, v10, v12, v13);
        CHidInput::ProcessPTPInertiaActions(*(CHidInput **)(v15 + 16840), v6, *(_QWORD *)(a2 + 16), v16);
      }
    }
    else
    {
      v4 = 0;
    }
  }
  ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v18);
  return v4;
}
