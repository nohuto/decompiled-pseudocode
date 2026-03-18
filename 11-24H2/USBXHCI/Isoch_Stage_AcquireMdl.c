/*
 * XREFs of Isoch_Stage_AcquireMdl @ 0x140010300
 * Callers:
 *     Isoch_PrepareStage @ 0x14000F1B0 (Isoch_PrepareStage.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqq @ 0x1400076A0 (WPP_RECORDER_SF_DDqq.c)
 */

__int64 __fastcall Isoch_Stage_AcquireMdl(__int64 *a1)
{
  __int64 v1; // rbx
  struct _MDL *v3; // rdi
  unsigned int v4; // edx
  __int64 v5; // rbp
  unsigned int i; // ecx
  char *v8; // r14
  ULONG v9; // r15d
  struct _MDL *Mdl; // rax
  __int64 v11; // r8

  v1 = *a1;
  v3 = *(struct _MDL **)(*a1 + 72);
  v4 = *(_DWORD *)(*a1 + 88) + *(_DWORD *)(*a1 + 92);
  v5 = *(_QWORD *)(*a1 + 56);
  for ( i = v3->ByteCount; v4 >= i; i = v3->ByteCount )
  {
    v3 = v3->Next;
    v4 -= i;
  }
  if ( v4 )
  {
    v8 = (char *)v3->StartVa + v3->ByteOffset + v4;
    v9 = v3->ByteCount - v4;
    Mdl = IoAllocateMdl(v8, v9, 0, 0, 0LL);
    a1[8] = (__int64)Mdl;
    if ( Mdl )
    {
      *((_BYTE *)a1 + 56) = 1;
      IoBuildPartialMdl(v3, Mdl, v8, v9);
      *(_QWORD *)a1[8] = v3->Next;
      return 0LL;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDqq(
          *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
          2u,
          v11,
          0x2Du,
          (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
          *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 143LL),
          *(_DWORD *)(*(_QWORD *)(v5 + 56) + 152LL),
          *(_QWORD *)(v1 + 24),
          a1);
      return 3221225626LL;
    }
  }
  else
  {
    a1[8] = (__int64)v3;
    return 0LL;
  }
}
