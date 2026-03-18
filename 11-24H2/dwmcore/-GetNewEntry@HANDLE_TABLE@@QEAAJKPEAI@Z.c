/*
 * XREFs of ?GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z @ 0x1801923CC
 * Callers:
 *     ?AllocateHandleTableEntry@CInteraction@@CAJPEAV1@PEAI@Z @ 0x180191E20 (-AllocateHandleTableEntry@CInteraction@@CAJPEAV1@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ResizeToFit@HANDLE_TABLE@@QEAAJI@Z @ 0x180191B00 (-ResizeToFit@HANDLE_TABLE@@QEAAJI@Z.c)
 *     ?Resize@HANDLE_TABLE@@AEAAJI@Z @ 0x180192580 (-Resize@HANDLE_TABLE@@AEAAJI@Z.c)
 */

__int64 __fastcall HANDLE_TABLE::GetNewEntry(HANDLE_TABLE *this, __int64 a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // ecx
  int v6; // edx
  char *v7; // r8
  unsigned int v8; // edi
  unsigned int v10; // eax
  int v11; // eax
  int v12; // eax

  v3 = 0;
  if ( dword_1803F924C < 0x400 )
  {
    v11 = HANDLE_TABLE::Resize((HANDLE_TABLE *)&CInteraction::s_InteractionHandleTable, 0x400u);
    v3 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x11Eu, 0LL);
      return v3;
    }
  }
  *a3 = 0;
  v5 = dword_1803F9250;
  v6 = Size;
  v7 = (char *)qword_1803F9258;
  v8 = dword_1803F924C;
  while ( *(_DWORD *)((char *)qword_1803F9258 + v5 * (unsigned int)Size) )
  {
    v10 = v5 + 1;
    v5 = 1;
    if ( v10 != dword_1803F924C )
      v5 = v10;
    if ( v5 == dword_1803F9250 )
    {
      v5 = 0;
      break;
    }
  }
  dword_1803F9250 = v5 + 1;
  if ( v5 + 1 == dword_1803F924C )
    dword_1803F9250 = 1;
  if ( !v5 )
  {
    v12 = HANDLE_TABLE::ResizeToFit((HANDLE_TABLE *)&CInteraction::s_InteractionHandleTable, dword_1803F924C);
    v3 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x154u, 0LL);
      return v3;
    }
    v7 = (char *)qword_1803F9258;
    v6 = Size;
    v5 = v8;
    dword_1803F9250 = v8 + 1;
  }
  *(_DWORD *)&v7[v6 * v5] = 89;
  *a3 = v5;
  return v3;
}
