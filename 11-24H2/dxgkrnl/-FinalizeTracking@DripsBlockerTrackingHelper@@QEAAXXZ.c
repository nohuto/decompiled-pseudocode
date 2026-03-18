/*
 * XREFs of ?FinalizeTracking@DripsBlockerTrackingHelper@@QEAAXXZ @ 0x1403F0F5C
 * Callers:
 *     ?FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ @ 0x1401B91BC (-FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?EnableEntryAccounting@DripsBlockerTrackingHelper@@IEAAXII_N@Z @ 0x1402E7858 (-EnableEntryAccounting@DripsBlockerTrackingHelper@@IEAAXII_N@Z.c)
 */

void __fastcall DripsBlockerTrackingHelper::FinalizeTracking(DripsBlockerTrackingHelper *this)
{
  unsigned int v2; // esi
  char *v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rbp
  char *v6; // r12
  __int64 v7; // rax
  char *v8; // rcx

  if ( !*((_BYTE *)this + 302128) )
  {
    v2 = 0;
    v3 = (char *)this + 56;
    v4 = -56LL - (_QWORD)this;
    do
    {
      if ( v3[48] )
      {
        *(_QWORD *)v3 = 0LL;
        v5 = 0LL;
        *((_QWORD *)v3 + 1) = 0LL;
        *((_QWORD *)v3 + 2) = 0LL;
        *((_QWORD *)v3 + 3) = 0LL;
        *((_DWORD *)v3 + 8) = 0;
        *((_DWORD *)v3 + 9) = 0;
        *((_DWORD *)v3 + 10) = 0;
        if ( *((_DWORD *)v3 - 3) )
        {
          v6 = &v3[v4];
          do
          {
            if ( *(_DWORD *)&v6[72 * v5 + 144 + (_QWORD)this] )
              DripsBlockerTrackingHelper::EnableEntryAccounting(this, v2, v5, 0);
            v7 = 9 * v5;
            v5 = (unsigned int)(v5 + 1);
            v8 = &v6[8 * v7];
            *(_QWORD *)v3 += *(_QWORD *)((char *)this + (_QWORD)v8 + 128);
            *((_QWORD *)v3 + 1) += *(_QWORD *)((char *)this + (_QWORD)v8 + 136);
            *((_QWORD *)v3 + 2) += *(_QWORD *)((char *)this + (_QWORD)v8 + 152);
            *((_QWORD *)v3 + 3) += *(_QWORD *)((char *)this + (_QWORD)v8 + 160);
            *((_DWORD *)v3 + 8) += *(_DWORD *)((char *)this + (_QWORD)v8 + 168);
            *((_DWORD *)v3 + 9) += *(_DWORD *)((char *)this + (_QWORD)v8 + 148);
            *((_DWORD *)v3 + 10) += *(_DWORD *)((char *)this + (_QWORD)v8 + 176);
          }
          while ( (unsigned int)v5 < *((_DWORD *)v3 - 3) );
        }
      }
      ++v2;
      v3 += 4720;
    }
    while ( v2 < 0x40 );
  }
}
