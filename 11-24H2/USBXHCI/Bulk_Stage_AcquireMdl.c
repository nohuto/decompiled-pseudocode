/*
 * XREFs of Bulk_Stage_AcquireMdl @ 0x140015840
 * Callers:
 *     Bulk_PrepareStage @ 0x140014A70 (Bulk_PrepareStage.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDqq @ 0x1400220F0 (WPP_RECORDER_SF_DDDqq.c)
 */

__int64 __fastcall Bulk_Stage_AcquireMdl(__int64 *a1)
{
  __int64 v1; // rbx
  struct _MDL *v3; // rdi
  unsigned int v4; // ecx
  __int64 v5; // rbp
  unsigned int i; // edx
  char *v8; // r14
  ULONG v9; // r15d
  struct _MDL *Mdl; // rax
  int v11; // r8d
  int v12; // edx

  v1 = *a1;
  v3 = *(struct _MDL **)(*a1 + 80);
  v4 = *(_DWORD *)(*a1 + 112);
  v5 = *(_QWORD *)(v1 + 56);
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
    a1[6] = (__int64)Mdl;
    if ( Mdl )
    {
      *((_BYTE *)a1 + 44) = 1;
      IoBuildPartialMdl(v3, Mdl, v8, v9);
      *(_QWORD *)a1[6] = v3->Next;
      return 0LL;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 143LL);
        LOBYTE(v12) = 2;
        WPP_RECORDER_SF_DDDqq(*(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL), v12, v11, 29);
      }
      return 3221225626LL;
    }
  }
  else
  {
    a1[6] = (__int64)v3;
    return 0LL;
  }
}
