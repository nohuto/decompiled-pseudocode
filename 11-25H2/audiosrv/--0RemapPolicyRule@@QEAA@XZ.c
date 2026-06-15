/*
 * XREFs of ??0RemapPolicyRule@@QEAA@XZ @ 0x18011CE44
 * Callers:
 *     ??$MakeAndInitialize@VCommunicationsRemapPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Details@WRL@Microsoft@@YAJPEAPEAUIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Z @ 0x18011CAC8 (--$MakeAndInitialize@VCommunicationsRemapPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU.c)
 *     ??$MakeAndInitialize@VRemapPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Details@WRL@Microsoft@@YAJPEAPEAUIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Z @ 0x18011CBA8 (--$MakeAndInitialize@VRemapPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutin.c)
 * Callees:
 *     ??0PolicyRule@@QEAA@XZ @ 0x18011CDD8 (--0PolicyRule@@QEAA@XZ.c)
 */

RemapPolicyRule *__fastcall RemapPolicyRule::RemapPolicyRule(RemapPolicyRule *this)
{
  PolicyRule::PolicyRule(this);
  *(_QWORD *)this = &RemapPolicyRule::`vftable';
  return this;
}
