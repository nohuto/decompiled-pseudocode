/*
 * XREFs of ?_SetForAsfw@CLastWokenThread@@AEAAXPEBUtagTHREADINFO@@_N@Z @ 0x14006B334
 * Callers:
 *     ?Set@CLastWokenThread@@QEAAXPEBUtagTHREADINFO@@W4LastWokenThreadPurpose@@_N@Z @ 0x14006AFF8 (-Set@CLastWokenThread@@QEAAXPEBUtagTHREADINFO@@W4LastWokenThreadPurpose@@_N@Z.c)
 * Callees:
 *     ?SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x14006C430 (-SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4Fore.c)
 */

void __fastcall CLastWokenThread::_SetForAsfw(CLastWokenThread *this, const struct tagTHREADINFO *a2, char a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rsi
  _BYTE *v7; // rdi

  v4 = *((_QWORD *)this + 1);
  if ( v4 )
    v5 = *(_QWORD *)(v4 + 464);
  else
    v5 = 0LL;
  v6 = *((_QWORD *)a2 + 58);
  v7 = (char *)this + 17;
  *((_QWORD *)this + 1) = a2;
  *((_BYTE *)this + 16) = a3;
  if ( v5 == v6 )
  {
    if ( *v7 )
      return;
  }
  else if ( *((_BYTE *)this + 17) )
  {
    ForegroundBoost::SetForegroundPriority(v4, 0LL, 16LL);
    *((_QWORD *)this + 3) = 0LL;
    *v7 = 0;
  }
  if ( v6 )
  {
    ForegroundBoost::SetForegroundPriority(*((_QWORD *)this + 1), 1LL, 16LL);
    *((_QWORD *)this + 3) = MEMORY[0xFFFFF78000000014];
    *v7 = 1;
  }
}
